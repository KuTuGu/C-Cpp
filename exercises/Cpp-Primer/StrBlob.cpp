#include "./StrBlob.h"
using namespace std;

StrBlob::StrBlob(): data(make_shared< vector<string> >()){};
StrBlob::StrBlob(initializer_list<string> strList):
                    data(make_shared< vector<string> >(strList)){};
void StrBlob::check(vector<string>::size_type i, const string& msg) const{
    if(i > data->size()){
        throw out_of_range(msg);
    }
};
string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
};
string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
};
void StrBlob::push_back(const string& str){
    data->push_back(str);
}
void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}
bool StrBlob::empty() const{
    if(data->size() == 0){
        return true;
    }
    return false;
}
vector<string>::size_type StrBlob::size() const{
    return data->size();
}
StrBlobPtr StrBlob::begin(){
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end(){
    return StrBlobPtr(*this, data->size());
}
const StrBlobPtr StrBlob::cbegin() const{
    return StrBlobPtr(*this);
}
const StrBlobPtr StrBlob::cend() const{
    return StrBlobPtr(*this, data->size());
}
StrBlobPtr::StrBlobPtr(): cur(0){};
StrBlobPtr::StrBlobPtr(const StrBlob& a, vector<string>::size_type sz): wptr(a.data), cur(sz){};
shared_ptr< vector<string> > StrBlobPtr::check(vector<string>::size_type i, const string& str) const{
    auto ret = wptr.lock();
    if(!ret){
        throw runtime_error("unbound StrBlobPtr");
    }
    if(i > ret->size()){
        throw out_of_range(str);
    }
    return ret;

}
string& StrBlobPtr::operator * () const{
    auto p = check(cur, "dereference past end");
    
    return (*p)[cur];
}
StrBlobPtr& StrBlobPtr::operator ++ (){
    check(cur, "increment past end of StrBlobPtr");
    cur++;
    return *this;
}
StrBlobPtr& StrBlobPtr::operator -- (){
    if(cur == 0){
        throw out_of_range("decrement past begin of StrBlobPtr");
    }
    cur--;
    return *this;
}

int main()
{
    StrBlob b2 = {"1", "2"}, b1 = b2;
    b1.push_back("about");
    cout << b1.size() << " " << b2.size() << endl;

    const StrBlob a = {"1", "2", "3", "4", "5"};
    cout << a.size() << endl;

    b1 = a;

    cout << b1.size() << " " << b2.size() << " " << a.size() << endl;

    return 0;
}

