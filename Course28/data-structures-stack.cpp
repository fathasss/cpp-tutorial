#include <iostream>
#include <stack>

using namespace std;

int main(){

    /*
        Yığın, belirli bir sırayla birden fazla öğeyi depolar LIFO.
        LIFO anlamına gelir Son giren İlk Çıkışı. LIFO'yu vedualize etmek için bir krep yığını düşünün, kreplerin her ikisi de eklenir ve üstten çıkarılır.
        Yani bir gözleme çıkarılırken, her zaman son olacak eklediğiniz biri. 
        Elemanları bu şekilde organize etmenin bilgisayarda LIFO olarak adlandırılması bilim ve programlama.
        aksine vektörler, yığındaki öğeler değil dizin numaraları ile erişilir. Öğeler eklendiğinden ve üstten kaldırıldığından, yalnızca yığının üstündeki öğeye erişebilirsiniz.

        Stack yani kuyruk yapısında kuyruğa en son dahil edilen öğe ilk öğesi olur.
    */

    stack<string> animals;

    //Stack is add element.
    animals.push("Cat");
    animals.push("Dog");
    animals.push("Wolf");

    cout << "Stack is first element: " << animals.top() << endl;

    animals.top() = "Beer";
    cout << "Stack is first element: " << animals.top() << endl;

    animals.pop();
    cout << "Stack is first element delete: (Beer is deleted.) -> " << animals.top() << endl;

    int stacksize = animals.size();
    cout << "Stack is size: " << stacksize << endl;

    if (!animals.empty()){
        cout << "Stack is not null" << endl;
    }
    else{
        cout << "Stack is null." << endl; 
    }
    

    return 0;
}