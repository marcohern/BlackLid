#ifndef LIST_ITEM_H_INCLUDED
#define LIST_ITEM_H_INCLUDED

#include <string>

namespace core {
    template <class T>
    class ListItem {
    private:
        std::string id;
        T* item;
        ListItem<T>* next;
        ListItem<T>* prev;
    public:
        ListItem(std::string s, T* item);
        ListItem(const char* s, T* item);
        ListItem(T* item);
        ~ListItem();

        inline std::string GetId();
        inline T* GetItem();
        inline ListItem<T>* GetNext();
        inline ListItem<T>* GetPrev();

        void SetItem(T* item);
        void SetNext(ListItem<T>* item);
        void SetPrev(ListItem<T>* item);
    };

    template <class T>
    ListItem<T>::ListItem(T* item) {
        new (this)ListItem<T>("",item);
    }

    template <class T>
    ListItem<T>::ListItem(const char* s, T* item) {
        new (this)ListItem<T>(std::string(s),item);
    }

    template <class T>
    ListItem<T>::ListItem(std::string s, T* item) {
        this->id = s;
        this->item = item;
        this->next = this->prev = 0;
        //Trace::Debug("Item " + id + " created!");
    }

    template <class T>
    ListItem<T>::~ListItem() {
        //Trace::Debug("Item " + id + " destroyed");
        this->next = this->prev = 0;
        delete this->item;
    }

    template <class T>
    std::string ListItem<T>::GetId() {
        return this->id;
    }

    template <class T>
    T* ListItem<T>::GetItem() {
        return this->item;
    }

    template <class T>
    ListItem<T>* ListItem<T>::GetNext() {
        return this->next;
    }

    template <class T>
    ListItem<T>* ListItem<T>::GetPrev() {
        return this->prev;
    }

    template <class T>
    void ListItem<T>::SetItem(T* item) {
        this->item = item;
    }

    template <class T>
    void ListItem<T>::SetNext(ListItem<T>* item) {
        this->next = item;
    }

    template <class T>
    void ListItem<T>::SetPrev(ListItem<T>* item) {
        this->prev = item;
    }
}


#endif //LIST_ITEM_H_INCLUDED
