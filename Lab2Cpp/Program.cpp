#include <iostream>
#include "../TextLibrary/Text.h"
using namespace std;

int main() {
    Text text1 = Text();
    text1.add("Lorem");
    text1.add("Dolorem aperiam maxime aspernatur. Ducimus saepe esse fugit est adipisci facere id iusto, voluptate temporibus eos autem repudiandae distinctio vero, ullam cupiditate soluta necessitatibus libero illo possimus? Nam, eligendi accusantium.");
    text1.add("Labore quidem earum quaerat officia, corrupti nostrum? Rem culpa labore consectetur cum optio facere, commodi ratione doloremque eligendi perspiciatis exercitationem autem deserunt, quae aut natus, porro expedita laborum temporibus amet.");
    text1.add("Adipisci porro vero omnis aliquam recusandae, autem error eaque, ipsa fugiat et voluptas ratione pariatur. Voluptatum culpa sapiente, illo minus officia accusantium blanditiis possimus, quo dicta, quasi repellendus odio ipsam.");
    cout<<string(text1)<<endl;
    Text text2 = Text("text");
    text2.add("text2");
    text2.add("text3");
    text2.add("text4");
    text2.add("text5");
    cout<<"text2: \n"<<string(text2)<<endl;
    text2.remove(0);
    cout<<"text2 without 0 item: \n"<< string(text2)<<endl;
    text2.remove("text4");
    text2.remove("tex4");
    cout<<"text2 without \"text4\": \n"<<string(text2)<<endl;
    text2.insert(0, "new text");
    cout<<"text2 change 0 item to \"new text\": \n"<<string(text2)<<endl;
    text2.clear();
    cout<<"clear text2: \n"<<string(text2)<<endl;
    cout<<"text2 number of rows: "<<text2.length()<<endl;
    cout<<"\nis text1 contains \"Lorem\": "<<text1.contains("Lorem")<<endl;
    cout<<"\nis text2 contains \"Lorem\": "<<text2.contains("Lorem")<<endl;
    
}