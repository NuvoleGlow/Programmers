#pragma region ���� ���ϱ�

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

#pragma region �� ���ϱ�

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 / num2;
// }

#pragma endregion

#pragma region ���� ���

// using namespace std;
// 
// int solution(int age)
// {
//     int standard = 2023;
//     return standard - age;
// }

#pragma endregion

#pragma region �� ���� ��

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 * num2;
// }

#pragma endregion

#pragma region �� ���� ��

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 - num2;
// }

#pragma endregion

#pragma region ������ ���ϱ�

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 % num2;
// }

#pragma endregion

#pragma region �� ���� ��

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 + num2;
// }

#pragma endregion

#pragma region ������

// int solution(int angle)
// {
//     return angle % 90 == 0 ? angle / 90 * 2 : (angle / 90) * 2 + 1;
// }

#pragma endregion

#pragma region �迭�� ��հ�

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

#pragma region ¦���� ��

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

#pragma region �粿ġ

// int solution(int n, int k)
// {
//     return (n * 12000) + ((k - (n / 10)) * 2000);
// }

#pragma endregion

#pragma region �ߺ��� ���� ����

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

#pragma region �Ӿ��̺��� Ű ū ���

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

#pragma region �迭 ������

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

#pragma region �迭 �� �� �����

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

#pragma region ���� ���� �Ա� (3)

// using namespace std;
// 
// int solution(int slice, int n)
// {
//     return (n + slice - 1) / slice;
// }

#pragma endregion

#pragma region ���� ���� �Ա� (1)

// using namespace std;
// 
// int solution(int n)
// {
//     return (n + 6) / 7;
// }

#pragma endregion

#pragma region ���� ��ġ ���ϱ�

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> dot)
// {
//     return dot[0] > 0 ? (dot[1] > 0 ? 1 : 4) : (dot[1] < 0 ? 3 : 2);
// }

#pragma endregion

#pragma region �� ���� ������

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 * 1000 / num2;
// }

#pragma endregion

#pragma region �迭 ������ ����

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

#pragma region �ﰢ���� �ϼ����� (1)

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

#pragma region ���ڿ� ������

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

#pragma region ���̽� �Ƹ޸�ī��

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

#pragma region ¦�� Ȧ�� ����

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

#pragma region ����

// #include <string>
// 
// using namespace std;
// 
// int solution(string message)
// {
//     return message.size() * 2;
// }

#pragma endregion

#pragma region Ư�� ���� �����ϱ�

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

#pragma region �ִ� �����(1)

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

#pragma region �迭 �ڸ���

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

#pragma region ¦���� �Ⱦ��

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

#pragma region ���� �ݺ� ����ϱ�

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

#pragma region ���ڿ��ȿ� ���ڿ�

// #include <string>
// 
// using namespace std;
// 
// int solution(string str1, string str2)
// {
//     return (str1.find(str2) == string::npos) ? 2 : 1;
// }

#pragma endregion

#pragma region �ʰ��� ���� �ޱ�

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

#pragma region �߾Ӱ� ���ϱ�

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

#pragma region �迭�� ���絵

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

#pragma region �ڸ��� ���ϱ�

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

#pragma region ������ �Ǻ��ϱ�

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

#pragma region �������� ����

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

#pragma region ���� ����

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

#pragma region �����ִ� ������ ���� (1)

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

#pragma region ���� ����

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

#pragma region �빮�ڿ� �ҹ���

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

#pragma region n�� ��� ����

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

#pragma region �����ﰢ�� ����ϱ�

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

#pragma region ���� ����

// using namespace std;
// 
// int solution(int n, int t)
// {
//     return n << t;
// }

#pragma endregion

#pragma region ��ȣ �ص�

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

#pragma region ���� ���� ��

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

#pragma region �ֻ����� ����

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

#pragma region ���ڿ� �����ϱ� (1)

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

#pragma region ���� ū �� ã��

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

#pragma region ��� ���ϱ�

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

#pragma region �迭 ȸ����Ű��

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

#pragma region ���� ���� �Ա� (2)

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

#pragma region �ִ� ����� (2)

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

#pragma region �ܰ��༺�� ����

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

#pragma region �ε��� �ٲٱ�

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

#pragma region ���� ã��

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

#pragma region 369����

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

#pragma region ���ڿ� �����ϱ� (2)

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

#pragma region �ռ��� ã��

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

#pragma region �ߺ��� ���� ����

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

#pragma region ���丮��

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

#pragma region �𽺺�ȣ (1)

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

#pragma region A�� B �����

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

#pragma region 2�������� �����

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

#pragma region k�� ����

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

#pragma region ����� ��

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

#pragma region ������� ���ϱ�

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

#pragma region �� ���� ������ ����

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