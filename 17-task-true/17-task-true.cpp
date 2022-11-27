/*----------------------------------------------------------------------*/
                               //Без Минут             
/*---------------------------------------------------------------------*/

#include <iostream>
using namespace std;

struct Anketa {
    
    string surname; 
    int teleph;
    int hours;
};

int main()
{
    
    cout << "\n\t\t - Пограмма - ";
    
    const int n = 3;
    Anketa client[n];
    for(int i = 0; i < n; i++) {
        
           cout << "\n\n--------------------------";
           cout << "\nВведите данные:\n\n";
           cout << "   " << i+1 << " - Клиент\n\n";
           cout << "1. Фамилия - ";cin >> client[i].surname;
           cout << "2. Телефон - ";cin >> client[i].teleph;
           cout << "\nВведите время записи: ";
           cout << "\n    1. В часах - ";cin >> client[i].hours;
           //Условия
           if(client[i].hours == 0) {
               
               cout << "\n\nОшибка вы ввели неправильное время записи!\n\n";
               break;
           }  
    }
   
    string fam_min = client[0].surname;
    string fam_max = client[0].surname;
    int min = client[0].hours;
    int max = client[0].hours;
    
    for(int i = 0; i < n; i++) {
        
        //Нахождение минимального числа
        if(client[i].hours < min) {
            
            fam_min = client[i].surname;
            min = client[i].hours;
        }    
        //Нахождение максимального числа
        if(client[i].hours > max) {
            
            max = client[i].hours;
            fam_max = client[i].surname;
        } 
        
    }
    
    int cin_client;
    cout << "\n_____________________________________";
    cout << "\n\n\n1. Найти самую раннюю запись\n";
    cout << "2. Найти самую позднюю запись\n";
    cout << "\nВвод = ";cin >> cin_client;
    switch(cin_client) {
            
        case 1: 
            cout << "\nСамая ранняя запись: \n" << "\n1. Фамилия - " << fam_min << "\n2. Время - "<< min;
            break;
        case 2:
            cout << "\nСама поздняя запись: \n" << "\n1. Фамилия - " << fam_max << "\n2. Время - "<< max;
            break;
    }
    return 0;
}

/*----------------------------------------------------------------------*/
                               // С Минутами             
/*---------------------------------------------------------------------*/

struct Anketa {
    
    string surname; 
    int teleph;
    int hours;
    int minutes;
};

int main()
{
    
    cout << "\n\t\t - Пограмма - ";
    
    const int n = 5;
    Anketa client[n];
    for(int i = 0; i < n; i++) {
        
           cout << "\n\n--------------------------";
           cout << "\nВведите данные:\n\n";
           cout << "   " << i+1 << " - Клиент\n\n";
           cout << "1. Фамилия - ";cin >> client[i].surname;
           cout << "2. Телефон - ";cin >> client[i].teleph;
           cout << "\nВведите время записи: ";
           cout << "\n    1. В часах - ";cin >> client[i].hours;
           cout << "    1. В минутах - ";cin >> client[i].minutes;
           //Условия
           if(client[i].hours == 0) {
               
               cout << "\n\nОшибка вы ввели неправильное время записи!\n\n";
               break;
           }  
    }
   
    string fam_min = client[0].surname;
    string fam_max = client[0].surname;
    
    int min_hour = client[0].hours;
    int max_hour = client[0].hours;
    
    int min_minut = client[0].minutes;
    int max_minut = client[0].minutes;
    
    for(int i = 0; i < n; i++) {
        
        //Нахождение минимального числа
        if(client[i].hours < min_hour) {
            //Минуты
            if(client[i].minutes < min_minut);
            
            fam_min = client[i].surname;
            min_hour = client[i].hours;
            min_minut = client[i].minutes;
        }    
        //Нахождение максимального числа
        if(client[i].hours > max_hour) {
            //Минуты
            if(client[i].minutes > max_minut);
            
            fam_max = client[i].surname;
            max_hour = client[i].hours;
            max_minut = client[i].minutes;
        } 
        
    }
    
    int cin_client;
    cout << "\n_____________________________________";
    cout << "\n\n\n1. Найти самую раннюю запись\n";
    cout << "2. Найти самую позднюю запись\n";
    cout << "\nВвод = ";cin >> cin_client;
    switch(cin_client) {
            
        case 1: 
            cout << "\nСамая ранняя запись: \n" << "\n1. Фамилия - " << fam_min << "\n2. Время - "<< min_hour << ":" << min_minut;
            break;
        case 2:
            cout << "\nСама поздняя запись: \n" << "\n1. Фамилия - " << fam_max << "\n2. Время - "<< max_hour << ":" << max_minut;
            break;
    }
    return 0;
}



/*----------------------------------------------------------------------*/
                                 /*17-task-TRUE*/
/*---------------------------------------------------------------------*/



#include <iostream>

using namespace std;

struct Anketa {
    
    string surname; 
    int teleph;
    int hours;
    int minutes;
};

int main()
{
    
    cout << "\n\t\t - Пограмма - ";
    
    const int n = 5;
    int il;
    Anketa client[n];
    for(int i = 0; i < n; i++) {
        
           cout << "\n\n--------------------------";
           cout << "\nВведите данные:\n\n";
           cout << "   " << i+1 << " - Клиент\n\n";
           cout << "1. Фамилия - ";cin >> client[i].surname;
           cout << "2. Телефон - ";cin >> client[i].teleph;
           cout << "\nВведите время записи: ";
           cout << "\n    1. В часах - ";cin >> client[i].hours;
           cout << "    1. В минутах - ";cin >> client[i].minutes;
           //Условия
           if(client[i].hours == 0) {
               
               cout << "\n\nОшибка: вы ввели неправильное время записи!\n\n";
               break;
           }
           //Условия
           if(client[i].hours == client[i-1].hours) {
               
               cout << "\n\nОшибка: повторный ввод времени записи!";
               break;
           }
    }
   
    string fam_min = client[0].surname;
    string fam_max = client[0].surname;
    
    int min_hour = client[0].hours;
    int max_hour = client[0].hours;
    
    int min_minut = client[0].minutes;
    int max_minut = client[0].minutes;
    
    for(int i = 0; i < n; i++) {
        
        //Нахождение минимального числа
        if(client[i].hours < min_hour) {
            //Минуты
            if(client[i].minutes < min_minut);
            
            fam_min = client[i].surname;
            min_hour = client[i].hours;
            min_minut = client[i].minutes;
        }    
        //Нахождение максимального числа
        if(client[i].hours > max_hour) {
            //Минуты
            if(client[i].minutes > max_minut);
            
            fam_max = client[i].surname;
            max_hour = client[i].hours;
            max_minut = client[i].minutes;
        } 
        
    }
    
    int cin_client;
    cout << "\n_____________________________________";
    cout << "\n\n\n1. Найти самую раннюю запись\n";
    cout << "2. Найти самую позднюю запись\n";
    cout << "\nВвод = ";cin >> cin_client;
    switch(cin_client) {
            
        case 1: 
            cout << "\nСамая ранняя запись: \n" << "\n1. Фамилия - " << fam_min << "\n2. Время - "<< min_hour << ":" << min_minut;
            break;
        case 2:
            cout << "\nСама поздняя запись: \n" << "\n1. Фамилия - " << fam_max << "\n2. Время - "<< max_hour << ":" << max_minut;
            break;
    }
    return 0;
}



/*----------------------------------------------------------------------*/
             //Этот вариант просто находит минимальное згачение!             
/*---------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct Anketa {
    
    string surname; 
    int teleph;
    int hours;
    int minutes;
};


int main() 
{
    
    cout << "\n\t\t - Программа - ";
    
    const int n = 5;
    Anketa client[n];
    for(int i = 0; i < n; i++) {
        
           cout << "\n\n--------------------------";
           cout << "\nВведите данные:\n\n";
           cout << "   " << i+1 << " - Клиент\n\n";
           cout << "1. Фамилия - ";cin >> client[i].surname;
           cout << "2. Телефон - ";cin >> client[i].teleph;
           cout << "\nВведите время записи: ";
           cout << "\n    1. В часах - ";cin >> client[i].hours;
           cout << "    1. В минутах - ";cin >> client[i].minutes;
           //Условия
           if(client[i].hours == 0) {
               
               cout << "\n\nОшибка: вы ввели неправильное время записи!\n\n";
               break;
           }
           //Условия
           if(client[i].hours == client[i-1].hours && client[i].minutes == client[i-1].minutes) {
               
               cout << "\n\nОшибка: повторный ввод времени записи!";
               break;
           }
    }
    
    string fam_min = client[0].surname;
    int min_hour = client[0].hours;
    int min_minut = client[0].minutes;
    
    for(int i = 0; i < n; i++) {
        
        //Нахождение минимального числа
        if(client[i].hours < min_hour) {
            //Минуты
            if(client[i].minutes < min_minut);
            
            fam_min = client[i].surname;
            min_hour = client[i].hours;
            min_minut = client[i].minutes;
        } 
        
    }
    
    cout << "\n_____________________________________";
    cout << "\n\n\nСамая ранняя запись: \n" << "\n1. Фамилия - " << fam_min << "\n2. Время - "<< min_hour << ":" << min_minut;
       
    return 0;
}
