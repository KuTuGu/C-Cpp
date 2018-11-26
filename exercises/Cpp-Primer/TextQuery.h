#ifndef TextQuery_H
#define TextQuery_H

#include "./StrBlob.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class QueryResult;
class TextQuery{
    private:
        shared_ptr< vector<string> > file;
        map< string, shared_ptr< set< vector<string>::size_type > > > lines;
    public:
        TextQuery();
        TextQuery(ifstream& in);
        
        QueryResult query(const string& str) const;
};
class QueryResult{
    private:
        string queryWord;
        shared_ptr< set< vector<string>::size_type > > lines;
        shared_ptr< vector<string> > file;
    public:
        friend ostream& print(ostream& out, const QueryResult& result);
        QueryResult(const string& str, 
                    shared_ptr< set< vector<string>::size_type > > strLine,
                    shared_ptr< vector<string> > fileName);
        set< vector<string>::size_type >::iterator begin();
        set< vector<string>::size_type >::iterator end();
        const set< vector<string>::size_type >::iterator cbegin() const;
        const set< vector<string>::size_type >::iterator cend() const;
        shared_ptr< vector<string> > get_file() const;
};

#endif
