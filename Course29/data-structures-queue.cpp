#include <iostream>
#include <queue>

using namespace std;

int main(){

    /*
        Kuyruk, birden fazla öğeyi belirli bir sırayla depolar FIFO.
        FIFO anlamına gelir İlk giren, İlk Çıkan. FIFO'yu görselleştirmek için bir kuyruğu bir süpermarkette sıraya giren insanlar olarak düşünün. 
        Sıradaki ilk kişi de süpermarketi ödeyip terk edebilen ilk kişidir. Elemanları organize etmenin bu yoluna bilgisayar bilimi ve programlamasında FIFO denir.
        aksine vektörler, kuyruktaki öğeler dizin numaraları ile erişilir. Kuyruk öğeleri sonuna eklendiğinden ve kaldırıldığından önden, yalnızca önden veya arkadan bir öğeye erişebilirsiniz.

        Queue yapısında FIFO prensibiyle çalışır. Yani ilk giren ilk çıkar.
    */

    queue<string> programming_languages;

    programming_languages.push("C++");

    cout << "Queue first element: " << programming_languages.front() << endl;

    programming_languages.push("C#");
    programming_languages.push("Java");
    programming_languages.push("Kotlin");

    cout << "Queue first element: (FIFO principle) -> " << programming_languages.front() << endl;

    cout << "Queue first element : " << programming_languages.front() << endl;
    cout << "Queue last element : " << programming_languages.back() << endl;

    int queuesize = programming_languages.size();

    cout << "Queue size: " << queuesize << endl;

    programming_languages.pop();
    cout << "Queue delete element: " << programming_languages.front() << endl; //Output C#

    if (!programming_languages.empty()){
        cout << "Programming Language is not null!" << endl;
    }
    else{
        cout << "Programming Language is null!" << endl;
    }
    

    return 0;
}