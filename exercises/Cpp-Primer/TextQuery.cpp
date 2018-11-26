#include "./TextQuery.h"
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

TextQuery::TextQuery(): file(make_shared< vector<string> >()){};
TextQuery::TextQuery(ifstream& in): file(make_shared< vector<string> >()){
    string strLine;
    while(getline(in, strLine)){
        file->push_back(strLine);
        int index = file->size() - 1;
        string word;

        istringstream line(strLine);
        while(line >> word){
            auto& data = lines[word];
            if(!data){
                data = make_shared< set< vector<string>::size_type > >();
            }
            data->insert(index);
        }
    }
};
QueryResult TextQuery::query(const string& str) const{
    auto it = lines.find(str);

    if(it != lines.end()){
        return QueryResult(str, it->second, file);
    }
    else{
        return QueryResult(str, make_shared< set< vector<string>::size_type > >(), file);
    }    
}
QueryResult::QueryResult(const string& str, 
                    shared_ptr< set< vector<string>::size_type > > strLine,
                    shared_ptr< vector<string> > fileName)
                    : queryWord(str), lines(strLine), file(fileName){};
set< vector<string>::size_type >::iterator QueryResult::begin(){
    return lines->begin();
}
set< vector<string>::size_type >::iterator QueryResult::end(){
    return lines->end();
}
const set< vector<string>::size_type >::iterator QueryResult::cbegin() const{
    return lines->cbegin();
}
const set< vector<string>::size_type >::iterator QueryResult::cend() const{
    return lines->cend();
}
shared_ptr< vector<string> > QueryResult::get_file() const{ 
    return make_shared< vector<string> >(*file); 
}
ostream& print(ostream& out, const QueryResult& result){
    out << result.queryWord << " occurs " << result.lines->size() << " "
        << (result.lines->size() > 1 ? "times" : "time") << endl;
    
    for(auto num : *(result.lines)){
        out << "\t(line " << num + 1 << ") "
            << *(result.file->begin() + num) << endl;
    }

    return out;
}
void runQueries(ifstream& in){
    TextQuery a(in);

    while(true){
        cout << "Enter a word to look for, or q to quit: ";

        string s;

        if(!(cin >> s) || s == "q"){
            break;
        }

        print(cout, a.query(s));
    }
}
void runQueries(ifstream& in, ofstream& out){
    TextQuery a(in);

    while(true){
        cout << "Enter a word to look for, or q to quit: ";

        string s;

        if(!(cin >> s) || s == "q"){
            break;
        }

        print(out, a.query(s));
    }
}
int main()
{
    ifstream in("./TextQuery.txt", ios::in);

    if(!in.is_open()){
        cerr << "No such file" << endl;
        return 1;
    }

    runQueries(in);

    in.close();
    
    return 0;
}

