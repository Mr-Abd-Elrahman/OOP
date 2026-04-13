

// ProgrammingAdivces.com
// Mohammed Abu-Hadhoud
#include <iostream>
#include <vector>

using namespace std;

class clsA
{
public:
    // Parametarized Constructor
    clsA(int value)
    {
        x = value;
    }

    int x;

    void Print()
    {
        cout << "The value of x=" << x << endl;
    }
};

int main()

{

    vector<clsA> v1;
    short NumberOfObjects = 5;

    // inserting object at the end of vector
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1.push_back(clsA(i));
    }

    // printing object content
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1[i].Print();
    }

    system("pause>0");
}

// #include <iostream>
// #include <vector>

// class clsA
// {
// private:
//     int x;
//     int Salary;
//     std::string Name;

// public:
//     clsA(int value, int Salary, std::string Name)
//     {
//         x = value;
//         this->Salary = Salary;
//         this->Name = Name;
//     }

//     void print()
//     {
//         std::cout << "===========================\n";
//         std::cout << "ID    : " << x << std::endl;
//         std::cout << "Salary: " << Salary << std::endl;
//         std::cout << "name  : " << Name << std::endl;
//     }
// };

// int main()
// {
//     // clsA o1(3), o2(4), o3(5);

//     // o1.print();
//     // o2.print();
//     // o3.print();

//     std::vector<clsA> Vector1;
//     short NumberOfObjects = 3;

//     for (int i = 1; i <= NumberOfObjects; i++)
//     {
//     }
//     clsA O1(6, 9000, "Mohammed"), O2(4, 4000, "Nabawy");
//     Vector1.push_back(O1);

//     Vector1.push_back(O2);

//     Vector1.push_back(clsA(7, 5000, "Yassin"));
//     std::cout << "Number Of Employees: " << Vector1.size() << std::endl
//               << std::endl;

//     for (int i = 0; i < Vector1.size(); i++)
//     {
//         Vector1[i].print();
//     }

//     std::cin.get();
// }

// #include <iostream>
// #include <vector>
// #include <string> // مكتبة النصوص
// using namespace std;

// // 1. تصميم الكلاس (القالب)
// class Student
// {
// public:
//     string Name;
//     float Grade;

//     // المشيد (Constructor): لتسهيل إدخال البيانات عند الإنشاء
//     Student(string n, float g)
//     {
//         Name = n;
//         Grade = g;
//     }

//     void PrintCard()
//     {
//         cout << "-------------------------" << endl;
//         cout << "Student: " << Name << endl;
//         cout << "Grade  : " << Grade << "%" << endl;
//     }
// };

// int main()
// {
//     // 2. إنشاء الفيكتور (الحاوية الديناميكية)
//     vector<Student> classRoom;

//     // 3. إضافة الطلاب (الإدخال)
//     // لاحظ أننا نستخدم المشيد لإنشاء الطالب فوراً داخل القوس
//     classRoom.push_back(Student("Ahmed", 85.5));
//     classRoom.push_back(Student("Sarah", 92.0));
//     classRoom.push_back(Student("Khalid", 70.4));

//     // لنفترض جاء طالب جديد فجأة
//     classRoom.push_back(Student("Mona", 99.9));

//     cout << "Number of students: " << classRoom.size() << "\n\n";

//     // 4. عرض البيانات (الإخراج)
//     // سنستخدم حلقة التكرار للوصول لكل طالب داخل الفيكتور
//     for (int i = 0; i < classRoom.size(); i++)
//     {
//         classRoom[i].PrintCard();
//     }

//     cin.get();
//     return 0;
// }

/*
========================[ Vector of Objects - Full Explanation ]========================

💡 1) ما هو الـ vector؟
- الـ vector هو dynamic array (مصفوفة ديناميكية)
- حجمه بيكبر ويصغر تلقائي
- نقدر نخزن فيه كائنات (objects) عادي جدًا

----------------------------------------------------------------------------------------

💡 2) مكان التخزين في الذاكرة (مهم جدًا 🔥)

std::vector<clsA> Vector1;

- الـ Vector نفسه بيتخزن في الـ Stack
- لكن العناصر اللي جواه (objects) بتتخزن في الـ Heap

الشكل:
[Stack]                 [Heap]
Vector1  --------->   element1, element2, element3 ...

----------------------------------------------------------------------------------------

💡 2) طرق إضافة كائن للـ vector

✅ (1) إضافة كائن جاهز:

clsA O2(4, 4000, "Nabawy");
Vector1.push_back(O2);

اللي بيحصل:
- عندك كائن O2 في الـ Stack
- بيتم عمل نسخة (Copy) منه
- النسخة تتحط جوه الـ vector في الـ Heap

الشكل:
O2 (Stack)  ----> Copy ----> داخل Vector (Heap)

⚠️ أي تعديل على O2 بعد كده لا يؤثر على النسخة داخل vector

----------------------------------------------------------------------------------------

✅ (2) إضافة كائن مؤقت (Temporary Object):

Vector1.push_back(clsA(7, 5000, "Yassin"));

اللي بيحصل:
1- إنشاء كائن مؤقت في الـ Stack
2- يتم عمل Copy له داخل الـ vector (في Heap)
3- الكائن المؤقت يتم تدميره فورًا

الشكل:
(temp object) ---> Copy ---> داخل Vector
       ❌ يتم حذفه

----------------------------------------------------------------------------------------

💡 4) يعني إيه "يعيش طول الـ scope"؟

clsA O2(4, 4000, "Nabawy");

- الكائن O2 يفضل موجود طول ما احنا داخل نفس البلوك { }
- أول ما يخرج من البلوك → يتم تدميره تلقائيًا

مثال:
{
    clsA O2(...);  // موجود هنا
}
// هنا O2 اتدمر ❌

----------------------------------------------------------------------------------------

💡 5) الكائن المؤقت (Temporary Object)

- ليس له اسم
- يعيش لفترة قصيرة جدًا (سطر واحد غالبًا)
- يتم تدميره بعد انتهاء الـ expression مباشرة

مثال:
Vector1.push_back(clsA(...)); // يعيش في نفس السطر فقط

----------------------------------------------------------------------------------------

💡 6) الفرق بين الكائن العادي والمؤقت

| كائن عادي            | كائن مؤقت           |
|----------------------|---------------------|
| له اسم               | بدون اسم            |
| يعيش طول الـ scope   | يعيش سطر واحد       |
| يمكن استخدامه لاحقًا | لا يمكن استخدامه    |
| موجود في Stack       | موجود مؤقتًا في Stack|

----------------------------------------------------------------------------------------

💡 7) أهم نقطة 🔥

- الـ vector لا يخزن الكائن الأصلي
- بل يخزن "نسخة" منه في الـ Heap

يعني:
أي object تضيفه → vector يعمل له copy ويحفظه عنده

----------------------------------------------------------------------------------------

💡 8) عدد العناصر في الـ vector

عدد العناصر = عدد مرات push_back أو emplace_back

مثال:
for (int i = 0; i < 3; i++)
{
    Vector1.push_back(...); // 1
    Vector1.push_back(...); // 2
    Vector1.push_back(...); // 3
}

=> الناتج = 9 عناصر (3 × 3)

----------------------------------------------------------------------------------------

💡 9) الأفضل استخدام emplace_back (احترافي 🔥)

بدل:
Vector1.push_back(clsA(7, 5000, "Yassin"));

استخدم:
Vector1.emplace_back(7, 5000, "Yassin");

الفرق:
- push_back → ينشئ كائن ثم ينسخه
- emplace_back → ينشئ الكائن مباشرة داخل vector (بدون copy)

----------------------------------------------------------------------------------------

💡 10) الخلاصة

✔ vector = حاوية ديناميكية
✔ نفسه في Stack وعناصره في Heap
✔ push_back يعمل Copy
✔ الكائن العادي يعيش طول الـ scope
✔ الكائن المؤقت يعيش سطر واحد فقط
✔ vector يخزن نسخة مستقلة من الكائن
✔ الأفضل استخدام emplace_back لتحسين الأداء

مع تحيات الحاج chatGPT
========================================================================================
*/
