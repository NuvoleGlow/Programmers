#pragma region 숫자 비교하기

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     if (num1 == num2)
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }

#pragma endregion

#pragma region 몫 구하기

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 / num2;
// }

#pragma endregion

#pragma region 나이 출력

// using namespace std;
// 
// int solution(int age)
// {
//     int standard = 2023;
//     return standard - age;
// }

#pragma endregion

#pragma region 두 수의 곱

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 * num2;
// }

#pragma endregion

#pragma region 두 수의 차

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 - num2;
// }

#pragma endregion

#pragma region 나머지 구하기

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 % num2;
// }

#pragma endregion

#pragma region 두 수의 합

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 + num2;
// }

#pragma endregion

#pragma region 각도기

// int solution(int angle)
// {
//     return angle % 90 == 0 ? angle / 90 * 2 : (angle / 90) * 2 + 1;
// }

#pragma endregion

#pragma region 배열의 평균값

// #include <vector>
// 
// using namespace std;
// 
// double solution(vector<int> numbers)
// {
//     double answer = 0;
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         answer += numbers[i];
//     }
//     return answer / numbers.size();
// }

#pragma endregion

#pragma region 짝수의 합

// using namespace std;
// 
// int solution(int n)
// {
//     int answer = 0;
// 
//     for (int i = 0; i < n + 1; i++)
//     {
//         if (i % 2 == 0)
//         {
//             answer += i;
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 양꼬치

// int solution(int n, int k)
// {
//     return (n * 12000) + ((k - (n / 10)) * 2000);
// }

#pragma endregion

#pragma region 중복된 숫자 개수

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> array, int n)
// {
//     int answer = 0;
//     for (auto i : array)
//     {
//         if (i == n) answer++;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 머쓱이보다 키 큰 사람

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> array, int height)
// {
//     int answer = 0;
// 
//     std::sort(array.begin(), array.end(), greater<int>());
// 
//     for (int i = 0; i < array.size(); i++)
//     {
//         if (array[i] <= height)
//         {
//             break;
//         }
//         answer++;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 배열 뒤집기

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> num_list)
// {
//     int end = num_list.size();
//     for (int i = 0; i < num_list.size() / 2; i++)
//     {
//         swap(num_list[i], num_list[end - i - 1]);
//     }
//     return num_list;
// }

#pragma endregion

#pragma region 배열 두 배 만들기

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> numbers)
// {
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         numbers[i] *= 2;
//     }
//     return numbers;
// }

#pragma endregion

#pragma region 피자 나눠 먹기 (3)

// using namespace std;
// 
// int solution(int slice, int n)
// {
//     return (n + slice - 1) / slice;
// }

#pragma endregion

#pragma region 피자 나눠 먹기 (1)

// using namespace std;
// 
// int solution(int n)
// {
//     return (n + 6) / 7;
// }

#pragma endregion

#pragma region 점의 위치 구하기

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> dot)
// {
//     return dot[0] > 0 ? (dot[1] > 0 ? 1 : 4) : (dot[1] < 0 ? 3 : 2);
// }

#pragma endregion

#pragma region 두 수의 나눗셈

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 * 1000 / num2;
// }

#pragma endregion

#pragma region 배열 원소의 길이

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<string> strlist)
// {
//     vector<int> answer(strlist.size());
//     for (int i = 0; i < strlist.size(); i++)
//     {
//         answer[i] = strlist[i].size();
//     }
//     return answer;
// }

#pragma endregion

#pragma region 삼각형의 완성조건 (1)

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> sides)
// {
//     sort(sides.begin(), sides.end());
//     if (sides[0] + sides[1] <= sides[2])
//     {
//         return 2;
//     }
//     else
//     {
//         return 1;
//     }
// }

#pragma endregion

#pragma region 문자열 뒤집기

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = my_string;
//     size_t size = my_string.size();
// 
//     for (int i = 0; i < size / 2; i++)
//     {
//         swap(answer[i], answer[size - i - 1]);
//     }
//     return answer;
// }

#pragma endregion

#pragma region 아이스 아메리카노

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int money)
// {
//     vector<int> answer;
// 
//     answer.push_back(money / 5500);
//     answer.push_back(money % 5500);
// 
//     return answer;
// }

#pragma endregion

#pragma region 짝수 홀수 개수

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> num_list)
// {
//     vector<int> answer = { 0, 0 };
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         if (num_list[i] % 2 == 0)
//         {
//             answer[0] += 1;
//         }
//         else
//         {
//             answer[1] += 1;
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 편지

// #include <string>
// 
// using namespace std;
// 
// int solution(string message)
// {
//     return message.size() * 2;
// }

#pragma endregion

#pragma region 특정 문자 제거하기

// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// string solution(string my_string, string letter)
// {
//     my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
//     return my_string;
// }

#pragma endregion

#pragma region 최댓값 만들기(1)

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> numbers)
// {
//     sort(numbers.begin(), numbers.end(), greater<int>());
//     return numbers[0] * numbers[1];
// }

#pragma endregion

#pragma region 배열 자르기

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> numbers, int num1, int num2)
// {
//     vector<int> answer(numbers.begin() + num1, numbers.begin() + num2 + 1);
//     return answer;
// }

#pragma endregion

#pragma region 짝수는 싫어요

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int n)
// {
//     vector<int> answer;
// 
//     for (int i = 0; 2 * i + 1 <= n; i++)
//     {
//         int a = 2 * i + 1;
//         answer.push_back(a);
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자 반복 출력하기

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string, int n)
// {
//     string answer = "";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             answer.push_back(my_string[i]);
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자열안에 문자열

// #include <string>
// 
// using namespace std;
// 
// int solution(string str1, string str2)
// {
//     return (str1.find(str2) == string::npos) ? 2 : 1;
// }

#pragma endregion

#pragma region 옷가게 할인 받기

// using namespace std;
// 
// int solution(int price)
// {
//     if (price >= 500000)
//     {
//         return price * 0.80f;
//     }
//     if (price >= 300000)
//     {
//         return price * 0.90f;
//     }
//     if (price >= 100000)
//     {
//         return price * 0.95f;
//     }
//     return price;
// }

#pragma endregion

#pragma region 중앙값 구하기

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> array)
// {
//     std::sort(array.begin(), array.end());
// 
//     return array[array.size() / 2];
// }

#pragma endregion

#pragma region 배열의 유사도

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<string> s1, vector<string> s2)
// {
//     int answer = 0;
// 
//     for (int i = 0; i < s1.size(); i++)
//     {
//         for (int j = 0; j < s2.size(); j++)
//         {
//             if (s1[i] == s2[j])
//             {
//                 answer++;
//                 break;
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 자릿수 더하기

// using namespace std;
// 
// int solution(int n)
// {
//     int answer = 0;
//     while (n > 0)
//     {
//         answer += n % 10;
//         n /= 10;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 제곱수 판별하기

// #include <math.h>
// 
// using namespace std;
// 
// int solution(int n)
// {
//     int i = sqrt(n);
//     if (sqrt(n) == i)
//     {
//         return 1;
//     }
//     else
//     {
//         return 2;
//     }
// }

#pragma endregion

#pragma region 순서쌍의 개수

// using namespace std;
// 
// int solution(int n)
// {
//     int answer = 0;
// 
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             answer++;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 모음 제거

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = "";
//     string aeiou = "aeiou";
//     int count = 0;
// 
//     for (int i = 0; i < my_string.length(); i++)
//     {
//         count = 0;
//         for (int j = 0; j < aeiou.length(); j++)
//         {
//             if (my_string[i] != aeiou[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 5)
//         {
//             answer.push_back(my_string[i]);
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 숨어있는 숫자의 덧셈 (1)

// #include <string>
// 
// using namespace std;
// 
// int solution(string my_string) {
//     int answer = 0;
//     for (const auto v : my_string)
//     {
//         if (isdigit(v))
//         {
//             answer += v - '0';
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 개미 군단

// using namespace std;
// 
// int solution(int hp)
// {
//     int answer = 0;
// 
//     answer += hp / 5;
//     hp = hp % 5;
//     answer += hp / 3;
//     hp = hp % 3;
//     answer += hp;
// 
//     return answer;
// }

#pragma endregion

#pragma region 대문자와 소문자

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     for (auto& v : my_string)
//     {
//         if (islower(v))
//         {
//             v = toupper(v);
//         }
//         else
//         {
//             v = tolower(v);
//         }
//     }
//     return my_string;
// }

#pragma endregion

#pragma region n의 배수 고르기

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int n, vector<int> numlist)
// {
//     vector<int> answer;
// 
//     for (int i = 0; i < numlist.size(); i++)
//     {
//         if (numlist[i] % n == 0)
//         {
//             answer.push_back(numlist[i]);
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 직각삼각형 출력하기

// #include <iostream>
// 
// using namespace std;
// 
// int main(void)
// {
//     int n;
//     cin >> n;
// 
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#pragma endregion

#pragma region 세균 증식

// using namespace std;
// 
// int solution(int n, int t)
// {
//     return n << t;
// }

#pragma endregion

#pragma region 암호 해독

// #include <string>
// 
// using namespace std;
// 
// string solution(string cipher, int code)
// {
//     string answer = "";
//     int count = 1;
// 
//     for (int i = 0; i < cipher.size(); i++)
//     {
//         if (count == code)
//         {
//             count = 1;
//             answer.push_back(cipher[i]);
//             continue;
//         }
//         count++;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 가위 바위 보

// #include <string>
// 
// using namespace std;
// 
// string solution(string rsp)
// {
//     string answer = "";
//     string killer = "205052";
// 
//     for (int i = 0; i < rsp.size(); i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (rsp[i] == killer[j])
//             {
//                 answer.push_back(killer[j + 3]);
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 주사위의 개수

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> box, int n)
// {
//     int x = box[0] / n;
//     int y = box[1] / n;
//     int z = box[2] / n;
// 
//     return x * y * z;
// }

#pragma endregion

#pragma region 문자열 정렬하기 (1)

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(string my_string)
// {
//     vector<int> answer;
//     for (const auto v : my_string)
//     {
//         if (isdigit(v))
//         {
//             answer.emplace_back(v - '0');
//         }
//     }
//     sort(answer.begin(), answer.end());
//     return answer;
// }

#pragma endregion

#pragma region 가장 큰 수 찾기

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> array)
// {
//     vector<int> answer{ array[0],0 };
//     for (int i = 1; i < array.size(); ++i)
//     {
//         if (answer[0] < array[i])
//         {
//             answer[1] = i;
//             answer[0] = array[i];
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 약수 구하기

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int n)
// {
//     vector<int> answer;
// 
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             answer.push_back(i);
//         }
//     }
//     return answer;
// }

#pragma endregion 

#pragma region 배열 회전시키기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> numbers, string direction)
// {
//     if (direction == "left")
//     {
//         rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
//     }
//     else
//     {
//         rotate(numbers.begin(), numbers.end() - 1, numbers.end());
//     }
// 
//     return numbers;
// }

#pragma endregion

#pragma region 피자 나눠 먹기 (2)

// using namespace std;
// 
// int solution(int n)
// {
//     int answer = 1;
//     int pizza = 6;
// 
//     while (true)
//     {
//         if (pizza % n == 0)
//         {
//             break;
//         }
//         answer++;
//         pizza = 6 * answer;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 최댓값 만들기 (2)

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> numbers)
// {
//     sort(numbers.begin(), numbers.end());
//     int n = numbers.size();
//     return max(numbers[n - 1] * numbers[n - 2], numbers[0] * numbers[1]);
// }

#pragma endregion

#pragma region 외계행성의 나이

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(int age)
// {
//     string answer = to_string(age);
// 
//     for (auto& v : answer)
//     {
//         v += 'a' - '0';
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 인덱스 바꾸기

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string, int num1, int num2)
// {
//     swap(my_string[num1], my_string[num2]);
//     return my_string;
// }

#pragma endregion

#pragma region 숫자 찾기

// #include <string>
// 
// using namespace std;
// 
// int solution(int num, int k)
// {
//     string num_string = to_string(num);
//     string k_string = to_string(k);
// 
//     for (int i = 0; i < num_string.size(); i++)
//     {
//         if (num_string[i] == k_string[0])
//             return i + 1;
//     }
//     return -1;
// }

#pragma endregion

#pragma region 369게임

// using namespace std;
// 
// int solution(int order)
// {
//     int answer = 0;
// 
//     while (true)
//     {
//         if (order % 10 == 3)
//         {
//             answer++;
//         }
//         if (order % 10 == 6)
//         {
//             answer++;
//         }
//         if (order % 10 == 9)
//         {
//             answer++;
//         }
//         if (order <= 10)
//         {
//             break;
//         }
//         order /= 10;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자열 정렬하기 (2)

// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         if ('A' <= my_string[i] && my_string[i] <= 'Z')
//         {
//             my_string[i] += 32;
//         }
//     }
//     sort(my_string.begin(), my_string.end());
// 
//     return my_string;
// }

#pragma endregion

#pragma region 합성수 찾기

// using namespace std;
// 
// bool prime(int i)
// {
//     for (int j = 2; ; j++)
//     {
//         if (i == 1)
//         {
//             return true;
//         }
//         if (i == 2)
//         {
//             return true;
//         }
//         if (i % j == 0)
//         {
//             return false;
//         }
//         if (j * j > i)
//         {
//             return true;
//         }
//     }
// }
// 
// int solution(int n)
// {
//     int answer = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (prime(i) == true)
//         {
//             answer++;
//         }
//     }
//     return n - answer;
// }

#pragma endregion

#pragma region 중복된 문자 제거

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = "";
//     for (auto i : my_string)
//     {
//         if (answer.find(i) == std::string::npos)
//             answer += i;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 팩토리얼

// using namespace std;
// 
// int factorial(int n)
// {
//     int a = 1;
//     int i = 0;
// 
//     while (true)
//     {
//         if (i == n)
//         {
//             return a;
//         }
//         a *= n - i;
//         i++;
//     }
// }
// 
// int solution(int n)
// {
//     int answer = 0;
// 
//     for (int i = 1; ; i++)
//     {
//         if (factorial(i) <= n && n < factorial(i + 1))
//         {
//             return i;
//         }
//     }
// }

#pragma endregion

#pragma region 모스부호 (1)

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string letter)
// {
//     string answer = "";
// 
//     string alphabet = "abcdefghijklmnopqrstuvwxyz";
//     string blank = " ";
//     vector<string> morse = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
//     string word = "";
// 
//     letter.push_back(blank[0]);
// 
//     for (int i = 0; i < letter.size(); i++)
//     {
//         if (letter[i] == blank[0])
//         {
//             for (int j = 0; j < morse.size(); j++)
//             {
//                 if (morse[j] == word)
//                 {
//                     answer.push_back(alphabet[j]);
//                 }
//             }
//             word = "";
//             continue;
//         }
//         word.push_back(letter[i]);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region A로 B 만들기

// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(string before, string after)
// {
//     sort(before.begin(), before.end());
//     sort(after.begin(), after.end());
//     if (after == before)
//         return 1;
//     else
//         return 0;
// }

#pragma endregion

#pragma region 2차원으로 만들기

// #include <vector>
// 
// using namespace std;
// 
// vector<vector<int>> solution(vector<int> num_list, int n)
// {
//     vector<vector<int>> answer(num_list.size() / n, vector<int>(n, -1));
// 
//     for (int i = 0; i < num_list.size() / n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             answer[i][j] = num_list[n * i + j];
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region k의 개수

// using namespace std;
// 
// int solution(int i, int j, int k)
// {
//     int answer = 0;
// 
//     for (i; i <= j; i++)
//     {
//         int copy_i = i;
// 
//         while (true)
//         {
//             if (copy_i % 10 == k && copy_i > 0)
//             {
//                 answer++;
//             }
//             if (copy_i == 0)
//             {
//                 break;
//             }
//             copy_i /= 10;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 가까운 수

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> array, int n)
// {
//     array.push_back(n);
// 
//     sort(array.begin(), array.end());
// 
//     int index = 0;
//     for (int i = 0; i < array.size(); i++)
//     {
//         if (array[i] == n)
//         {
//             index = i;
//             break;
//         }
//     }
//     if (index == array.size() - 1)
//         return array[index - 1];
//     if (index == 0)
//         return array[1];
// 
//     if (array[index] - array[index - 1] <= array[index + 1] - array[index])
//         return array[index - 1];
//     else
//         return array[index + 1];
// }

#pragma endregion

#pragma region 진료순서 정하기

// #include <vector>
// #include <algorithm>
// using namespace std;
// 
// vector<int> solution(vector<int> emergency)
// {
//     vector<int> answer;
// 
//     for (const auto v : emergency)
//     {
//         int count = 0;
//         for (const auto v2 : emergency)
//         {
//             count += v2 > v;
//         }
//         answer.emplace_back(count + 1);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 한 번만 등장한 문자

// #include <string>
// #include <vector>
// #include <map>
// 
// using namespace std;
// 
// string solution(string s)
// {
//     string answer = "";
// 
//     map<char, int> m;
//     for (const auto v : s)
//     {
//         m[v]++;
//     }
// 
//     for (const auto& v : m)
//     {
//         if (v.second == 1)
//         {
//             answer.push_back(v.first);
//         }
//     }
//     return answer;
// }

#pragma endregion