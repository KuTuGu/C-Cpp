#ifndef StrBlob_H
#define StrBlob_H

#include <iostream>
#include <vector>
using namespace std;

class StrBlobPtr;
class StrBlob{
    private:
        shared_ptr< vector<string> > data;
        void check(vector<string>::size_type i, const string& msg) const;
    public:
        friend class StrBlobPtr;
        StrBlob();
        StrBlob(initializer_list<string> strList);
        vector<string>::size_type size() const;
        bool empty() const;

        void push_back(const string& str);
        void pop_back();

        string& front() const; 
        string& back() const;

        StrBlobPtr begin();
        StrBlobPtr end();
        const StrBlobPtr cbegin() const;
        const StrBlobPtr cend() const;
};
class StrBlobPtr{
    private:
        weak_ptr< vector<string> > wptr;
        vector<string>::size_type cur;
        shared_ptr< vector<string> > check(vector<string>::size_type i, const string& str) const;
    public:
        StrBlobPtr();
        StrBlobPtr(const StrBlob& a, vector<string>::size_type sz = 0);
        string& operator * () const;
        StrBlobPtr& operator ++ ();
        StrBlobPtr& operator -- ();
};

#endif
