#include <string>
using namespace std;

class Row
{
private:
    string _row;
public:
    Row(string row)
    {
        _row = row;
    }
    Row()
    {
        _row = "";
    }
    void clearRow()
    {
        _row = "";
    }
    string get()
    {
        return _row;
    }
    void set(string row)
    {
        _row = row;
    }
    int length()
    {
        return _row.length();
    }
    bool contains(string substr)
    {
        return _row.find(substr) != string::npos;
    }
    operator string() const {
        return _row;
    }
};
