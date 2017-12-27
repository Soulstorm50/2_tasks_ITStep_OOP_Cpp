# Tasks from ITStep. OOP C++

1 Введение в ООП. Классы

1.1 Реализовать класс Point, описывающий точку в двумерном (или трёхмерном) пространстве. Предусмотреть поля, хранящие координаты по X и Y. Сделать конструктор по умолчанию, конструктор с параметрами, геттеры и сеттеры для всех полей, а также методы, позволяющие переместить точку (например - вверх, вниз, влево, вправо) на указанное количество единиц.

1.2 Реализовать класс Counter, описывающий цифровой счетчик. Одним из полей этого класса будет переменная с ограниченным диапазоном, значение которой сбрасывается, если её целочисленное значение достигает определённого максимума (например, переменная current может принимать значения в диапазоне от 0 до 99999). В качестве реального примера такого счётчика представьте счётчик километража в автомобиле, или же домашний счётчик по учёту расхода воды или электроэнергии. Обязательные поля: текущее значение счётчика, максимальное значение диапазона, минимальное значение диапазона, шаг прироста. Обязательные методы: конструктор по умолчанию, несколько видов конструкторов с параметрами, увеличение текущего значения счётчика на 1, увеличение значения на заданную величину (шаг прироста), сброс (обнуление) счётчика, установка минимального и максимального значений.

1.3 Реализовать класс Fraction, который представляет собой пользовательский тип данных для работы с обыкновенными дробями:
http://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D1%8B%D0%BA%D0%BD%D0%BE%D0%B2%D0%B5%D0%BD%D0%BD%D0%B0%D1%8F_%D0%B4%D1%80%D0%BE%D0%B1%D1%8C#.D0.9E.D0.B1.D1.8B.D0.BA.D0.BD.D0.BE.D0.B2.D0.B5.D0.BD.D0.BD.D1.8B.D0.B5_.D0.B4.D1.80.D0.BE.D0.B1.D0.B8
Обязательные поля: числитель и знаменатель (целочисленные). Обязательные методы: конструктор по умолчанию, конструктор с одним параметром (передаётся десятичная дробь), конструктор с 2 параметрами (причём знаменатель не может быть равен 0), сеттеры (знаменатель ≠ 0) и геттеры, показ дроби на экран консоли. Реализовать следующие методы:  возврат значения типа double на основании значений числителя и знаменателя дроби, сокращение дроби, сравнение дробей, сложение, вычитание, умножение, деление дробей.


2 Введение в ООП. Классы

2.1 Реализовать класс Student, который содержит поля для хранения фамилии, имени, отчества, даты рождения, домашнего адреса, телефонного номера. Также за каждым студентом закреплены 3 динамических массива оценок – зачёты, курсовые работы, экзамены. Обязательные методы: 2-3 версии конструктора с параметрами, геттеры и сеттеры для всех полей, показ всех данных о студенте. 


3 Конструкторы. Деструкторы

3.1 Реализовать класс Group, который работает с разреженным массивом студентов (Student**). Обязательные поля: указатель на массив студентов, количество человек в группе, название группы, специализация группы, номер курса. Обязательные методы: конструктор по умолчанию (пустая группа), конструктор с одним параметром типа unsigned int (задаётся произвольное количество студентов - предусмотреть автоматическую генерацию фамилий, имён, возрастов и других данных), конструктор с параметром типа Group (создаётся точная копия группы). Реализовать следующие методы: показ всех студентов группы (сначала - название и специализация группы, затем - порядковые номера, фамилии в алфавитном порядке и имена студентов). Сделать методы добавления студента в группу, редактирования данных о студенте и группе, слияния двух групп, перевода студента из одной группы в другую, отчисления всех не сдавших сессию студентов, отчисления одного самого неуспевающего студента.

3.2 Альтернативное задание: cоздайте приложение "Телефонная книга". Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса. Наполните класс полями и методами на своё усмотрение, используйте инициализаторы, реализуйте деструкторы. Обязательно необходимо выделять динамически память под ФИО. Предоставьте пользователю возможность добавлять новых абонентов, удалять абонентов, искать абонентов по ФИО, показывать всех абонентов.


4 Инкапсуляция

4.1 Создать свой собственный супер-удобный класс String, который позволит работать со строками именно так, как вы до сих пор об этом только мечтали!
Задания для практики (доделывание предоставленного примера):

1) пометить конструктор String(unsigned int capacity) как explicit
2) применить в конструкторах инициализаторы / делегирование (вместо функции Initialize)
3) добавить публичный метод char GetCharAt(unsigned int index), который вернёт символ строки по указанной позиции
4) void Print() - показ строки на экран
5) void PrintLn() - показ строки на экран с переводом курсора на следующую строку
6) void GetLine() - ввод строки с клавиатуры
7) const char* GetCharArray() const - возврат константного указателя на массив символов строки
8) int CompareTo(String) - сравнение нашей строки с какой-то другой строкой. Добавить версию int CompareTo(char*)
9) void Concat(String) - присоединить к нашей строке переданную строку
10) void Concat(char*)
11) void Concat(int)
12) void Concat(double)
13)  bool Contains(String) - проверить, содержится ли в нашей строке переданная подстрока (в любой позиции)
14) bool EndsWith(String) - проверить, заканчивается ли наша строка текстом, который передан в параметре
15) bool StartsWith(String)
16) bool Equals(String) - проверить, соответствует ли лексикографически наша строка другой строке (аналогично CompareTo)
17) int IndexOf(char) - проверка на вхождение символа в строку, в результате работы возвращает индекс первого найденного символа (от начала строки); если ничего не найдено, возвращает -1
18) int LastIndexOf(char) - проверка на вхождение символа в строку, в результате работы возвращает индекс последнего найденного символа (поиск с конца строки); если ничего не найдено, возвращает -1
19) int IndexOf(String) - проверка на вхождение подстроки в строку, в результате работы возвращает индекс начала вхождения; если ничего не найдено, возвращает -1
20) int LastIndexOf(String) - проверка на вхождение подстроки в строку, в результате работы возвращает индекс начала вхождения (но поиск идёт с конца строки); если ничего не найдено, возвращает -1
21) void Remove (int) - удаление всех символов до конца строки, начиная от переданного индекса
22) void Remove (int start, int count) - удаление count символов, начиная от индекса start
23) void Replace(char R, char Z) - меняет в строке все найденные символы R на переданный символ Z
24) void Replace(String substr, String rep) - заменяет найденную подстроку substr на строку rep
25) String* Split(char separator, int& pieces) - делит нашу строку на кусочки, разделённые символом separator. Указатель на массив кусочков вернётся из функции. В pieces запишется количество получившихся кусочков
26) String ToLower() - привод к нижнему регистру (в том числе и для русского текста)
27) String ToUpper() - привод к верхнему регистру (в том числе и для русского текста)
28) void Trim() - убирает лишние пробелы в начале и в конце строки
29) void TrimEnd()
30) void TrimStart()
31) void Reverse() – переворачивание строки
32) void SortAZ() - сортировка всех символов строки в алфавитном порядке от А до Я
33) void SortZA() - сортировка всех символов строки в алфавитном порядке от Я до А
34) void Shuffle() - случайное перемешивание символов строки
35) void RandomFill() - заполнение строки случайными символами (на весь capacity)


5 Перегрузка операций

5.1 Разработать класс Date,  включающий следующее:

1) поля day, month, year;
2) константный метод char *DayOfWeek() const;
3) конструктор по умолчанию Date() (текущая дата);
4) конструктор с параметрами Date(int day, int month,     int year);
5) необходимые сеттеры и геттеры для полей;
6) метод, возвращающий разницу между двумя датами в днях (перегруженный бинарный оператор «-» );
7) метод изменения даты на заданное количество дней (перегруженный бинарный оператор «+»);
8) метод вывода даты на экран void PrintDate();
9) перегруженные операции «++»,  «--»,  «>»,  «<»,  «==»,  «!=».

5.2 Разработать класс Time,  включающий следующее:

1) поля seconds, minutes, hours;
2) константный метод char *TimeOfDay() const;
3) конструктор по умолчанию Time() (текущее время);
4) конструктор с параметрами Time(int sec, int min, int hour);
5) необходимые сеттеры и геттеры для полей;
6) метод изменения времени на заданное количество секунд (перегруженный бинарный оператор «+»);
7) метод вывода времени на экран void PrintTime();
8) перегруженные операции «++»,  «--»,  «>»,  «<»,  «==»,  «!=».

5.3 В класс Student добавить перегрузку += int, что добавляет оценку в домашние задания. А также перегрузить операции «>»,  «<»,  «==»,  «!=» для сравнения двух студентов по средним баллам.

5.4 В класс Group добавить перегрузку += Student, что добавляет студента в группу. А также перегрузить операции «>»,  «<»,  «==»,  «!=» для сравнения двух групп по количеству студентов.

5.5 Добавить в класс Date и Time перегрузки: перегруженные операции >>, << и ( )

5.6 В класс Student и Group добавить перегрузку >>, <<, ( ) и =.

5.7 В класc Group добавить перегрузку [ ] (возврат студента по индексу), предусмотреть конструктор преобразования из типа Student*, перегрузить операцию преобразования типа из Group в Student*.

5.8 В класс String добавить:

1) перегрузка операции =
2) перегрузка операции == (лексикографическое сравнение двух строк)
3) перегрузка операции >
4) перегрузка операции <
5) перегрузка операции >=
6) перегрузка операции <=
7) перегрузка операции !=
8) перегрузка () (повторная инициализация строки)
9) перегрузка [] (доступ к элементу строки по индексу, предусмотреть возможность обращения к несуществующему элементу.
10) перегрузка операции + (String + String)
11) перегрузка операции += (конкатенация String)
12) перегрузка операции += (конкатенация char*)
13) перегрузка операции + (String + char*)
14) перегрузка операции + (char* + String)
15) перегрузка операции + (String + char)
16) перегрузка операции + (char + String)
17) перегрузка операции << (ostream&, String) - показ на экран
18) перегрузка операции >> (istream&, String) - ввод с клавиатуры
19) перегрузка операции char* () - преобразование в char*
20) перегрузка операции int () - конвертация строки в целое число (если это возможно)
21) перегрузка операции double () - конвертация строки в вещественное число (если это возможно)


6 Структуры данных

6.1 Реализовать класс MyVector, представляющий собой одномерный безразмерный динамический массив для удобной работы с целыми числами типа int.

В классе должно быть три поля:
указатель на инкапсулированный массив типа int (можно назвать его data, или ar);
текущее количество существующих элементов в массиве (int size, изначально - 0);
резерв памяти (int capacity, по умолчанию 10).

Конструкторы:
- по умолчанию (без параметров), который выделяет память под массив на десять 10 элементов, равных нулю (capacity = 10, size = 0)
- параметризированный конструктор - принимает один параметр (задаёт capacity), выделяет память под массив (size по-прежнему 0).

Методы:
- геттеры для size и capacity. Сеттера для size не должно быть!
- Print (показ на экран консоли всех элементов массива)
- EnsureCapacity (приватный метод! проверяет, достаточно ли резерва памяти для хранения указанного в параметре количества элементов. Если значение параметра меньше текущего capacity, то ничего не происходит. Если значение параметра больше текущего capacity, то массив пересоздаётся, памяти выделяется в 1.5 раза + 1 элемент больше, а существующие элементы не должны быть потеряны)
- PushBack (добавление элемента в конец массива. Должна быть проверка, достаточно ли памяти!)
- PushFront (добавление одного элемента в начало массива)
- Insert (вставка одного элемента в массив по указанному индексу, с проверкой на выход за пределы массива)
- RemoveAt (удаление одного элемента по указанному индексу. Должна быть проверка на допустимость индекса)
- Remove (удаление одного или всех элементов, значение которых совпадает со значением переданного параметра)
- PopFront (удаление первого элемента из массива)
- PopBack (удаление последнего элемента из массива)
- Clear (обнуление массива - всем элементам массива по индексам от 0 до size-1 присвоить значение 0, полю size присвоить значение 0)
- IsEmpty (метод возвращает true, если size = 0, и false в обратном случае)
- TrimToSize (метод подгоняет значение capacity под size, естественно с перевыделением памяти) 
- IndexOf (линейный поиск слева направо первого вхождения в массив указанного значения. В результате работы вернуть индекс найденного элемента, а eсли ничего не найдено, вернуть -1)
- LastIndexOf (линейный поиск справа налево вхождения в массив указанного значения. В результате работы вернуть индекс найденного элемента, а eсли ничего не найдено, вернуть -1)
- Reverse (изменение порядка следования элементов в массиве на противоположный)
- SortAsc (быстрая сортировка значений элементов массива по возрастанию)
- SortDesc (быстрая сортировка значений элементов массива по убыванию)
- Shuffle (случайное перемешивание элементов массива)
- RandomFill (заполнение массива случайными значениями)
- Equals (в качестве параметра передаётся указатель на другой вектор. Метод сравнивает массивы не только по количеству элементов, но и по их содержимому)
- GetElementAt (возврат копии элемента массива по указанному индексу, с проверкой на выход за пределы массива)
- Clone (метод создаёт точную копию вектора).
- конструктор копирования
- перегрузка операции =
- перегрузка операции [ ]
- перегрузка операции ==
- перегрузка >>  и <<

Каждый из вышеперечисленных методов должен быть хорошо протестирован. Коды всех тестов должны прилагаться в мейне.


6.2 Добавить в класс Student пользовательские вектора для хранения оценок по экзаменам, зачётам и домашним заданиям (заменить векторами стандартные массивы типа int).

6.3 * Добавить в класс Group пользовательский вектор для хранения информации о студентах (вместо массива типа Student).





