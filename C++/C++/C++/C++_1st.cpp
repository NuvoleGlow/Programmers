#pragma region 배열 뒤집기

// #include <string>
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
// 
//     return num_list;
// }

#pragma endregion

#pragma region 특정 문자 제거하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string, string letter)
// {
//     string answer = my_string;
//     for (int i = 0; i < answer.length(); )
//     {
//         if (answer[i] == letter[0])
//         {
//             answer.erase(i, 1);
//             i = 0;
//             continue;
//         }
//         i++;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 삼각형의 완성조건 (1)

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> sides)
// {
//     int answer = 0;
//     
//     sort(sides.begin(), sides.end());
//     if (sides[0] + sides[1] <= sides[2])
//     {
//         answer = 2;
//     }
//     else
//     {
//         answer = 1;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 문자 반복 출력하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string, int n)
// {
//     int size = my_string.size();
//     string answer = "";
// 
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             answer.insert(answer.end(), my_string[i]);
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 섬 연결하기

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// 
// using namespace std;
// 
// class DisjointSet
// {
// public:
//     DisjointSet(int n)
//         : _parent(n), _rank(n,1)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             _parent[i] = i;
//         }
//     }
// 
// 	int FindLeader(int u)
// 	{
// 		if (u == _parent[u])
// 		{
// 			return u;
// 		}
// 		int parent = _parent[u];
// 		return FindLeader(parent);
// 	}
// 
// 	void Merge(int u, int v)
// 	{
// 		int uLeader = FindLeader(u);
// 		int vLeader = FindLeader(v);
// 
// 		if (vLeader == uLeader)
// 		{
// 			return;
// 		}
// 
// 		if (_rank[uLeader] > _rank[vLeader])
// 		{
// 			std::swap(uLeader, vLeader);
// 		}
// 
// 		_parent[uLeader] = vLeader;
// 
// 		if (_rank[uLeader] == _rank[vLeader])
// 		{
// 			_rank[vLeader]++;
// 		}
// 	}
// 
// private:
//     vector<int> _parent;
//     vector<int> _rank;
// };
// 
// struct KruskalEdge
// {
// 	int cost;
// 	int u;
// 	int v;
// 
// 	bool operator<(const KruskalEdge& edge) const
// 	{
// 		if (cost < edge.cost)
// 		{
// 			return true;
// 		}
// 		else
// 		{
// 			return false;
// 		}
// 	}
// };
// 
// int solution(int n, vector<vector<int>> costs)
// {
//     int answer = 0;
// 	vector<KruskalEdge> selectEdges;
// 	selectEdges.clear();
// 	vector<KruskalEdge> edges;
// 	for (int i = 0; i < costs.size(); i++)
// 	{
// 		int u = costs[i][0];
// 		int v = costs[i][1];
// 		int cost = costs[i][2];
// 
// 		edges.push_back({ cost, u ,v });
// 	}
// 
// 	std::sort(edges.begin(), edges.end());
// 
// 	DisjointSet sets(n);
// 
// 	for (KruskalEdge& edge : edges)
// 	{
// 		if (sets.FindLeader(edge.u) == sets.FindLeader(edge.v))
// 		{
// 			continue;
// 		}
// 		sets.Merge(edge.u, edge.v);
// 		selectEdges.push_back(edge);
// 		answer += edge.cost;
// 	}
//     return answer;
// }

#pragma endregion

#pragma region 모음 제거

// #include <string>
// #include <vector>
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
// #include <vector>
// 
// using namespace std;
// 
// int solution(string my_string)
// {
//     int answer = 0;
//     string one_to_nine = "123456789";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < one_to_nine.size(); j++)
//         {
//             if (my_string[i] == one_to_nine[j])
//             {
//                 answer = answer + j + 1;
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region n의 배수 고르기

// #include <string>
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

#pragma region 가위 바위 보

// #include <string>
// #include <vector>
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

#pragma region 7의 개수

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string seven = "7";
// int answer = 0;
// 
// int solution(vector<int> array)
// {
//     for (int i = 0; i < array.size(); i++)
//     {
//         int number = array[i];
//         int n = 0;
//         while (true)
//         {
//             if (number > 0 && number < 10)
//             {
//                 n++;
//                 break;
//             }
//             number = number / 10;
//             n++;
//         }
// 
//         string array_i = std::to_string(array[i]);
// 
//         for (int j = 0; j < n; j++)
//         {
//             if (array_i[j] == seven[0])
//             {
//                 answer++;
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 진료 순서 정하기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> emergency)
// {
//     vector<int> answer;
//     answer.clear();
//     for (int i = 0; i < emergency.size(); i++)
//     {
//         answer.push_back(0);
//     }
// 
//     int length = emergency.size();
//     
//     vector<int> num_list = emergency;
//     std::sort(num_list.begin(), num_list.end());
// 
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         for (int j = 0; j < emergency.size(); j++)
//         {
//             if (num_list[i] == emergency[j])
//             {
//                 answer[j] = length - i;
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 특이한 정렬

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> numlist, int n)
// {
//     vector<int> answer;
// 
//     vector<int> near_num;
// 
//     for (int i = 0; i < numlist.size(); i++)
//     {
//         if (numlist[i] - n >= 0)
//         {
//             near_num.push_back(numlist[i] - n);
//         }
//         else
//         {
//             near_num.push_back(n - numlist[i]);
//         }
//     }
//     
//     vector<int> copy_near = near_num;
//     std::sort(copy_near.begin(), copy_near.end());
// 
//     for (int i = 0; i < copy_near.size(); i++)
//     {
//         for (int j = 0; j < near_num.size(); j++)
//         {
//             if (copy_near[i] == copy_near[i + 1])
//             {
//                 break;
//             }
//             if (copy_near[i] == near_num[j])
//             {
//                 answer.push_back(numlist[j]);
//             }
//         }
//     }
// 
//     vector<int> complete;
// 
//     for (int i = 0; i < answer.size(); i++)
//     {
//         if (copy_near[i] == copy_near[i+1] && answer[i] < answer[i + 1])
//         {
//             complete.push_back(answer[i + 1]);
//             complete.push_back(answer[i]);
//             i++;
//             continue;
//         }
//         if (copy_near[i] == copy_near[i + 1] && answer[i] > answer[i + 1])
//         {
//             complete.push_back(answer[i]);
//             complete.push_back(answer[i + 1]);
//             i++;
//             continue;
//         }
//         complete.push_back(answer[i]);
//     }
//     return complete;
// }

#pragma endregion

#pragma region 세균 증식

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(int n, int t)
// {
//     int answer = 1;
// 
//     for (int i = 0; i < t; i++)
//     {
//         answer = answer * 2;
//     }
// 
//     return n * answer;
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
// 
//     string numbers = "0123456789";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < numbers.size(); j++)
//         {
//             if (my_string[i] == numbers[j])
//             {
//                 answer.push_back((j+10) % 10);
//             }
//         }
//     }
// 
//     sort(answer.begin(), answer.end());
// 
//     return answer;
// }

#pragma endregion

#pragma region 대문자와 소문자

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = "";
//     string alphabet = "QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < alphabet.size(); j++)
//         {
//             if (my_string[i] == alphabet[j])
//             {
//                 if (j < 26)
//                 {
//                     answer.push_back(alphabet[j + 26]);
//                 }
//                 else
//                 {
//                     answer.push_back(alphabet[j - 26]);
//                 }
//             }
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 개미 군단

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(int hp)
// {
//     int answer = 0;
// 
//     while (true)
//     {
//         if (hp >= 5)
//         {
//             hp -= 5;
//             answer++;
//             continue;
//         }
//         if (hp >= 3)
//         {
//             hp -= 3;
//             answer++;
//             continue;
//         }
//         if (hp > 0)
//         {
//             hp -= 1;
//             answer++;
//             continue;
//         }
//         if (hp == 0)
//         {
//             break;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 가장 큰 수 찾기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> array)
// {
//     vector<int> answer;
// 
//     vector<int> copy_array = array;
//     std::sort(copy_array.begin(), copy_array.end());
//     
//     answer.push_back(copy_array[copy_array.size() - 1]);
// 
//     for (int i = 0; i < array.size(); i++)
//     {
//         if (copy_array[copy_array.size() - 1] == array[i])
//         {
//             answer.push_back(i);
//             break;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 약수 구하기

// #include <string>
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

#pragma region 주사위의 개수

// #include <string>
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
//     return x*y*z;
// }

#pragma endregion

#pragma region 인덱스 바꾸기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// string solution(string my_string, int num1, int num2)
// {
//     string answer = my_string;
// 
//     swap(answer[num1], answer[num2]);
// 
//     return answer;
// }

#pragma endregion

#pragma region 한 번만 등장한 문자

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string s)
// {
//     string answer = "";
//     string alphabet = "abcdefghijklmnopqrstuvwxyz";
//     vector<vector<int>> s_number(26, vector<int>(0));
// 
//     for (int i = 0; i < s.size(); i++)
//     {
//         for (int j = 0; j < alphabet.size(); j++)
//         {
//             if (s[i] == alphabet[j])
//             {
//                 s_number[j].push_back(1);
//             }
//         }
//     }
//     for (int i = 0; i < s_number.size(); i++)
//     {
//         if (s_number[i].size() == 1)
//         {
//             answer.push_back(alphabet[i]);
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
//     vector<int> answer = numbers;
//     string right = "right";
//     string left = "left";
// 
//     if (direction == right)
//     {
//         for (int i = 0; i < answer.size() - 1; i++)
//         {
//             swap(answer[answer.size() - 1 - i], answer[answer.size() - 1 - (i + 1)]);
//         }
//     }
//     if (direction == left)
//     {
//         for (int i = 0; i < answer.size() - 1; i++)
//         {
//             swap(answer[i], answer[i+1]);
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 암호해독

// #include <string>
// #include <vector>
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
//     return answer;
// }

#pragma endregion

#pragma region 숫자 찾기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(int num, int k)
// {
//     int answer = -1;
//     vector<int> num_vector;
// 
//     while (true)
//     {
//         if (num < 10)
//         {
//             num_vector.push_back(num);
//             break;
//         }
//         num_vector.push_back(num % 10);
//         num /= 10;
//     }
// 
//     reverse(num_vector.begin(), num_vector.end());
// 
//     for (int i = 0; i < num_vector.size(); i++)
//     {
//         if (num_vector[i] == k)
//         {
//             answer = i + 1;
//             break;
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 피자 나눠 먹기 (2)

// #include <string>
// #include <vector>
// 
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

#pragma region 외계행성의 나이

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// string solution(int age)
// {
//     string answer = "";
//     string age_alpha = "abcdefghij";
// 
//     vector<int> age_vector;
// 
//     while (true)
//     {
//         if (age < 10)
//         {
//             age_vector.push_back(age);
//             break;
//         }
//         age_vector.push_back(age % 10);
//         age /= 10;
//     }
// 
//     reverse(age_vector.begin(), age_vector.end());
// 
//     for (int i = 0; i < age_vector.size(); i++)
//     {
//         for (int j = 0; j < age_alpha.size(); j++)
//         {
//             if (age_vector[i] == j)
//             {
//                 answer.push_back(age_alpha[j]);
//                 break;
//             }
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 문자열 정렬하기 (2)

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = "";
//     string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     string for_answer = "";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < alphabet.size() / 2; j++)
//         {
//             if (my_string[i] == alphabet[j])
//             {
//                 answer.push_back(alphabet[j]);
//                 continue;
//             }
//             if (my_string[i] == alphabet[j + 26])
//             {
//                 answer.push_back(alphabet[j]);
//                 continue;
//             }
//         }
//     }
//     for (int i = 0; i < alphabet.size() / 2; i++)
//     {
//         for (int j = 0; j < answer.size(); j++)
//         {
//             if (alphabet[i] == answer[j])
//             {
//                 for_answer.push_back(alphabet[i]);
//             }
//         }
//     }
//     return for_answer;
// }

#pragma endregion

#pragma region 평행

// #include <vector>
// 
// using namespace std;
// 
// float inclination(vector<vector<int>> dots, int start, int end)
// {
//     return (dots[start][1] - dots[end][1]) / (dots[start][0] - dots[end][0]);
// }
// 
// int solution(vector<vector<int>> dots)
// {
//     if (inclination(dots, 0, 1) == inclination(dots, 2, 3))
//     {
//         return 1;
//     }
//     if (inclination(dots, 0, 2) == inclination(dots, 1, 3))
//     {
//         return 1;
//     }
//     if (inclination(dots, 0, 3) == inclination(dots, 1, 2))
//     {
//         return 1;
//     }
// 
//     return 0;
// }

#pragma endregion

#pragma region 최댓값 만들기 (2)

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> numbers)
// {
//     sort(numbers.begin(), numbers.end());
// 
//     if (numbers[0] * numbers[1] > numbers[numbers.size() - 1] * numbers[numbers.size() - 2])
//     {
//         return numbers[0] * numbers[1];
//     }
//     else
//     {
//         return numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
//     }
// }

#pragma endregion

#pragma region 369게임

// #include <string>
// #include <vector>
// 
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

#pragma region 중복된 문자 제거

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string)
// {
//     string answer = "";
//     string alphabet = " QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm";
//     vector<int> double_check(53, 0);
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         for (int j = 0; j < alphabet.size(); j++)
//         {
//             if (alphabet[j] == my_string[i])
//             {
//                 double_check[j] += 1;
//                 if (double_check[j] == 1)
//                 {
//                     answer.push_back(my_string[i]);
//                 }
//             }
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 분수의 덧셈

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int gcd(int a, int b)
// {
//     int c;
//     while (b)
//     {
//         c = a % b;
//         a = b;
//         b = c;
//     }
//     return a;
// }
// 
// vector<int> solution(int denum1, int num1, int denum2, int num2)
// {
//     vector<int> answer;
// 
//     int num = num1 * num2;
//     int denum = denum1 * num2 + denum2 * num1;
// 
//     answer.push_back(denum / gcd(num, denum));
//     answer.push_back(num / gcd(num, denum));
// 
//     return answer;
// }

#pragma endregion

#pragma region 최빈값 구하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> array)
// {
//     int answer = -1;
//     vector<vector<int>> for_count(1000, vector<int>(2, 0));
// 
//     for (int i = 0; i < array.size(); i++)
//     {
//         for_count[array[i]][0] += 1;
//         for_count[array[i]][1] = array[i];
//     }
// 
//     int top = 0;
// 
//     for (int i = 0; i < for_count.size(); i++)
//     {
//         if (for_count[i][0] > top)
//         {
//             top = for_count[i][0];
//             answer = for_count[i][1];
//             continue;
//         }
//         if (for_count[i][0] == top)
//         {
//             top = for_count[i][0];
//             answer = -1;
//             continue;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 모스부호(1)

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

#pragma region 구슬을 나누는 경우의 수

// #include <vector>
// 
// using namespace std;
// 
// int solution(int balls, int share)
// {
//     double denum = 1;
//     double num = 1;
//     int discount = 0;
// 
//     while (true)
//     {
//         if (discount == share)
//         {
//             break;
//         }
//         denum = denum * (balls - discount);
//         discount++;
//     }
//     discount = 0;
//     while (true)
//     {
//         if (discount == share)
//         {
//             break;
//         }
//         num = num * (share - discount);
//         discount++;
//     }
//     return denum / num;
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

#pragma region A로 B 만들기

// #include <string>
// #include <algorithm>
// #include <vector>
// 
// using namespace std;
// 
// int solution(string before, string after)
// {
//     string v_before = "";
//     string v_after = "";
//     
//     string alphabet = "abcdefghijklmnopqrstuvwxyz";
// 
//     for (int i = 0; i < alphabet.size(); i++)
//     {
//         for (int j = 0; j < before.size(); j++)
//         {
//             if (alphabet[i] == before[j])
//             {
//                 v_before.push_back(alphabet[i]);
//             }
//             if (alphabet[i] == after[j])
//             {
//                 v_after.push_back(alphabet[i]);
//             }
//         }
//     }
// 
//     for (int i = 0; i < v_before.size(); i++)
//     {
//         if (v_after[i] != v_before[i])
//         {
//             return 0;
//         }
//     }
// 
//     return 1;
// }

#pragma endregion

#pragma region 2차원으로 만들기

// #include <string>
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

#pragma region 팩토리얼

// #include <vector>
// 
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

#pragma region 가까운 수

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> array, int n)
// {
//     int answer = 0;
//     vector<int> needed;
// 
//     for (int i = 0; i < array.size(); i++)
//     {
//         if (array[i] - n < 0)
//         {
//             needed.push_back(n - array[i]);
//         }
//         else
//         {
//             needed.push_back(array[i] - n);
//         }
//     }
//     
//     vector<int> c_needed = needed;
//     sort(c_needed.begin(), c_needed.end());
// 
//     vector<int> compare;
// 
//     if (c_needed[0] == c_needed[1])
//     {
//         for (int i = 0; i < needed.size(); i++)
//         {
//             if (needed[i] == c_needed[0])
//             {
//                 compare.push_back(i);
//             }
//         }
//         if (array[compare[0]] < array[compare[1]])
//         {
//             return array[compare[0]];
//         }
//         else
//         {
//             return array[compare[1]];
//         }
//     }
//     else
//     {
//         for (int i = 0; i < needed.size(); i++)
//         {
//             if (needed[i] == c_needed[0])
//             {
//                 compare.push_back(i);
//                 break;
//             }
//         }
//     }
//     return array[compare[0]];
// }

#pragma endregion

#pragma region 공 던지기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> numbers, int k)
// {
//     int answer = 1;
// 
//     for (int i = 1; i < k; i++)
//     {
//         if (answer + 2 > numbers.size())
//         {
//             if (answer + 2 == numbers.size() + 1)
//             {
//                 answer = -1;
//             }
//             else
//             {
//                 answer = 0;
//             }
//         }
// 
//         answer += 2;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 잘라서 배열로 저장하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<string> solution(string my_str, int n)
// {
//     vector<string> answer;
//     int count = 0;
//     int size = 0;
// 
//     for (int i = 0; i < my_str.size(); i++)
//     {
//         if (size == n)
//         {
//             count++;
//             size = 0;
//         }
//         if (size == 0)
//         {
//             answer.push_back("");
//         }
//         answer[count].push_back(my_str[i]);
//         size++;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 외계어 사전

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<string> spell, vector<string> dic)
// {
//     for (int i = 0; i < dic.size(); i++)
//     {
//         if (spell.size() != dic[i].size())
//         {
//             continue;
//         }
//         string sample = "";
//         vector<int> needed;
//         for (int j = 0; j < dic[i].size(); j++)
//         {
//             for (int k = 0; k < spell.size(); k++)
//             {
//                 if (spell[k][0] == dic[i][j])
//                 {
//                     sample.push_back(spell[k][0]);
//                     needed.push_back(k);
//                 }
//             }
//         }
//         if (dic[i].size() == sample.size())
//         {
//             sort(needed.begin(), needed.end());
//             for (int j = 0; j < needed.size(); j++)
//             {
//                 if (needed[j] == needed[j + 1])
//                 {
//                     break;
//                 }
//                 if (j == needed.size() - 1)
//                 {
//                     return 1;
//                 }
//             }
//         }
//     }
//     return 2;
// }

#pragma endregion

#pragma region 소인수분해

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int n)
// {
//     vector<int> answer;
//     vector<int> get(n+1, 0);
//     int i = 2;
// 
//     while (true)
//     {
//         if (n == 1)
//         {
//             break;
//         }
//         if (n % i == 0)
//         {
//             n /= i;
//             if (get[i] == 0)
//             {
//                 get[i] = 1;
//             }
//             continue;
//         }
//         else
//         {
//             i++;
//         }
//     }
// 
//     for (int i = 0; i < get.size(); i++)
//     {
//         if (get[i] == 1)
//         {
//             answer.push_back(i);
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 숨어있는 숫자의 덧셈 (2)

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(string my_string)
// {
//     int answer = 0;
//     string numbers = "0123456789";
//     vector<int> storage;
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         storage.push_back(-1);
//         for (int j = 0; j < numbers.size(); j++)
//         {
//             if (my_string[i] == numbers[j])
//             {
//                 storage[i] = j;
//                 break;
//             }
//         }
//     }
// 
//     int temp = 0;
// 
//     for (int i = 0; i < storage.size(); i++)
//     {
//         if (storage[i] == -1)
//         {
//             answer += temp;
//             temp = 0;
//             continue;
//         }
//         if (storage[i] != -1 && i != storage.size() - 1)
//         {
//             temp *= 10;
//             temp += storage[i];
//             continue;
//         }
//         if (storage[i] != -1 && i == storage.size() - 1)
//         {
//             temp *= 10;
//             temp += storage[i];
//             answer += temp;
//             continue;
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 영어가 싫어요

// #include <string>
// #include <vector>
// #include <cmath>
// 
// using namespace std;
// 
// long long solution(string numbers)
// {
//     long long answer = 0;
//     vector<string> needed;
//     needed.push_back("zero");
//     needed.push_back("one");
//     needed.push_back("two");
//     needed.push_back("three");
//     needed.push_back("four");
//     needed.push_back("five");
//     needed.push_back("six");
//     needed.push_back("seven");
//     needed.push_back("eight");
//     needed.push_back("nine");
// 
//     vector<int> holder;
//     int i = 0;
//     int j = 0;
//     while (i < numbers.size())
//     {
//         if (numbers[i] == needed[j][0])
//         {
//             if (numbers[i + 1] == needed[j][1])
//             {
//                 i += needed[j].size();
//                 holder.push_back(j);
//                 j = 0;
//                 continue;
//             }
//             else
//             {
//                 j++;
//                 continue;
//             }
//         }
//         else
//         {
//             j++;
//             continue;
//         }
//     }
//     
//     int n = holder.size() - 1;
//     for (int m = 0; m < holder.size(); m++)
//     {
//         long long o = pow(10, n);
//         answer += o * holder[m];
//         n--;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 컨트롤 제트

// #include <string>
// 
// using namespace std;
// 
// int solution(string s)
// {
//     int answer = 0;
//     string z = "Z -";
//     string holder = "";
//     int temp = 0;
//     bool minus = false;
// 
//     s.push_back(z[1]);
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == z[2])
//         {
//             minus = true;
//             continue;
//         }
//         else if (s[i] == z[1] && minus == false)
//         {
//             if (holder == "")
//                 holder.push_back('0');
//             temp = stoi(holder);
//             answer += temp;
//             holder = "";
//             continue;
//         }
//         else if (s[i] == z[1] && minus == true)
//         {
//             if (holder == "")
//                 holder.push_back('0');
//             temp = -stoi(holder);
//             answer += temp;
//             holder = "";
//             minus = false;
//             continue;
//         }
//         else if (s[i] == z[0])
//         {
//             answer -= temp;
//             temp = 0;
//             continue;
//         }
//         else
//         {
//             holder.push_back(s[i]);
//             continue;
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
// 
//     while (n >= 1)
//     {
//         answer += n % 10;
//         n /= 10;
//     }
//     return answer;
// }

#pragma endregion

#pragma region 평균 구하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// double solution(vector<int> arr)
// {
//     double answer = 0;
// 
//     for (int i = 0; i < arr.size(); i++)
//     {
//         answer += arr[i];
//     }
// 
//     return answer / arr.size();
// }

#pragma endregion

#pragma region 약수의 합

// #include <string>
// #include <vector>
// 
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
//             answer += i;
//         }
//         else
//         {
//             continue;
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 문자열 내 p와 y의 개수

// #include <string>
// #include <iostream>
// using namespace std;
// 
// bool solution(string s)
// {
//     string Pp = "Pp";
//     string Yy = "Yy";
//     int p = 0;
//     int y = 0;
// 
//     for (int i = 0; i < s.size(); i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             if (s[i] == Pp[j])
//             {
//                 p++;
//                 break;
//             }
//             if (s[i] == Yy[j])
//             {
//                 y++;
//                 break;
//             }
//         }
//     }
// 
//     if (p != y)
//         return false;
//     else
//         return true;
// }

#pragma endregion

#pragma region 자연수 뒤집어 배열로 만들기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(long long n)
// {
//     vector<int> answer;
// 
//     while (n >= 1)
//     {
//         answer.push_back(n % 10);
//         n /= 10;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region x만큼 간격이 있는 n개의 숫자

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<long long> solution(int x, int n)
// {
//     vector<long long> answer;
// 
//     for (int i = 0; i < n; i++)
//     {
//         answer.push_back(x + x * i);
//     }
// 
//     return answer;
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

#pragma region 몫 구하기

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 / num2;
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

#pragma region 두 수의 합

// using namespace std;
// 
// int solution(int num1, int num2)
// {
//     return num1 + num2;
// }

#pragma endregion

#pragma region 각도기

// using namespace std;
// 
// int solution(int angle)
// {
//     if (0 < angle && angle < 90)
//     {
//         return 1;
//     }
//     if (angle == 90)
//     {
//         return 2;
//     }
//     if (90 < angle && angle < 180)
//     {
//         return 3;
//     }
//     if (angle == 180)
//     {
//         return 4;
//     }
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

#pragma region



#pragma endregion