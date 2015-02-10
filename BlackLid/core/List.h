#ifndef LISTT_H_INCLUDED
#define LISTT_H_INCLUDED

#include "ListItem.h"

namespace core {
    template <class T>
    class List {
    private:
        ListItem<T> *first;
        ListItem<T> *last;
        ListItem<T> *cursor;
        int count;
    public:
        List();
        ~List();

        void Add(std::string id,T* item);
        void Add(T* item);
        T* Find(const char *s);
        T* Find(std::string s);

        inline T* Begin();
        inline bool Finished();
        inline T* Next();
        inline T* GetCurrentItem();
        inline int GetCount();
    };

    template <class T>
    List<T>::List() {
        this->first = this->last = this->cursor = 0x0;
        this->count  = 0;
    }

    template <class T>
    List<T>::~List() {
        //Trace::Write("List destroyed");
        ListItem<T> *p, *t;
        p=this->first;
        while (p!=0) {
            t = p;
            p = p->GetNext();
            delete t;
        }
        this->first = this->last = this->cursor = 0x0;
        this->count=0;
    }

    template <class T>
    void List<T>::Add(T* item) {
        Add(std::string(""),item);
    }

    template <class T>
    void List<T>::Add(std::string id, T* item) {
        ListItem<T> *li = new ListItem<T>(id,item);
        if (this->first==0) {
            this->first = li;
        } else {
            li->SetPrev(this->last);
            this->last->SetNext(li);
        }
        this->last = li;
        this->count++;
    }

    template <class T>
    T* List<T>::Begin() {
        cursor = first;
        return (cursor==0) ? 0 : cursor->GetItem();
    }

    template <class T>
    bool List<T>::Finished() {
        return (this->cursor==0) ? true : false;
    }

    template <class T>
    T* List<T>::Next() {
        this->cursor = this->cursor->GetNext();
        return (cursor==0) ? 0 : cursor->GetItem();
    }

    template <class T>
    T* List<T>::GetCurrentItem() {
        return (this->cursor==0) ? 0 : this->cursor->GetItem();
    }

    template <class T>
    T* List<T>::Find(const char *s) {
        return Find(std::string(s));
    }

    template <class T>
    T* List<T>::Find(std::string s) {
        ListItem<T> *p = first;
        std::string id;
        while (p != 0x0) {
            id = p->GetId();
            if (id == s) {
                return p->GetItem();
            }
            p = p->GetNext();
        }
        return 0x0;
    }

    template <class T>
    int List<T>::GetCount() {
        return this->count;
    }
}


#endif //LISTT_H_INCLUDED
