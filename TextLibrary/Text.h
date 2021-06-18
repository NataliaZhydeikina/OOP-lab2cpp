#include "Row.h"
#include <list>
#include <iostream>

class Text
{
private:
    list<Row> text;
    list<Row>::iterator find(string row)
    {
        for (auto it = text.begin(); it != text.end(); )
            if (it->get() == row) {
               return it;
            }
            else {
                it++;
            }
        return text.end();
    }
public:
    Text()
    {
        text = {};
    }
    Text(string str)
    {
        text.push_back(Row(str));
    }
    void add(string row)
    {
        text.push_back(Row(row));
    }
    void clear()
    {
        text.clear();
    }
    void remove(int index)
    {  
        int i = 0;
        for (auto it = text.begin(); it != text.end(); i++)
        {
            if (i == index) {
                it = text.erase(it);
            }
            else {
                ++it;
            }
        }
    }
    void remove(string row)
    {     
        list<Row>::iterator rowIter = find(row);
        if (rowIter != text.end()) {
            text.erase(rowIter);
        }
    }
    operator string() const {
        string result;
        for (Row row : text) {
            result.append(string(row)+"\n");
        }
        return result;
    }
    void insert(int index, string row)
    {
        auto text_begin = text.begin();
        advance(text_begin, index);
        text.insert(text_begin, Row(row));
    }
    int length() {
        return text.size();
    }
    bool contains(string row) {
        return text.end() != find(row);
    }
};
