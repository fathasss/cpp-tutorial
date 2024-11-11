#include <iostream>
#include <ctime>

using namespace std;

int main(){
    // Get the timestamp for the current date and time
    time_t timestamp;     //OR time_t timestamp = time(NULL)
    time(&timestamp);

    cout << ctime(&timestamp) << endl; // Display the date and time represented by the timestamp

    /*
        DATA TYPES
        tm_sec -> Bir dakika içindeki saniye
        tm_min -> Bir saat içindeki dakika
        tm_hour -> Bir gün içindeki saat (0-23)
        tm_mday -> Ayın günü
        tm_mon -> Ay (January-December)
        tm_year -> 1900' den bu geçen zaman
        tm_wday -> Hafta içi (Monday-Sunday) - (0-6)
        tm_yday -> Yılın günü (0-365)
        tm_isdst -> Yaz saati uygulaması geçerli olduğunda pozitif (true) , olmadığında negatif (false)

        Aylar 0-11 Aralık ayı 11 ile temsil edilir.
        Yıllar 1900 yılına göre temsil edilir 2024 yılı -> 124
    */

    struct tm datetime;
    time_t timestamp2;

    datetime.tm_year = 2024-1900;
    datetime.tm_mon = 12-2;
    datetime.tm_mday = 7;
    datetime.tm_hour = 16;
    datetime.tm_min = 48;
    datetime.tm_sec = 24;

    datetime.tm_isdst = -1;

    timestamp2 = mktime(&datetime);

    cout << "Date Struct : " << ctime(&timestamp2) <<endl;

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The date is on a : " << weekdays[datetime.tm_wday] << endl;

    /*
        localtime() ve gmtime() fonksiyonlar zaman damgalarını datetime yapılara dönüştürebilir.
        localtime() işlev, bilgisayarın saat dilimindeki saati temsil eden bir yapıya bir işaretçi döndürür.
        gmtime() işlev, GMT saat dilimindeki saati temsil eden bir yapıya bir işaretçi döndürür.
        Bu işlevler işaretçi tarih-zaman yapısına. Değerinin beklenmedik bir şekilde değişmediğinden emin olmak istiyorsak, 
        işaretçiyi referans alarak bunun bir kopyasını yapmalıyız. Erteleme hakkında bilgi edinmek için, C ++ Dereference eğitimi.
    */

    time_t timestamp3 = time(&timestamp3);
    struct tm datetime2 = *localtime(&timestamp3);

    cout << datetime2.tm_hour << endl;

    return 0;
}