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

#pragma region 이진수 더하기

// #include <string>
// 
// using namespace std;
// 
// string solution(string bin1, string bin2)
// {
//     string answer = "";
//     unsigned int bint3 = stoi(bin1) + stoi(bin2);
//     if (bint3 == 0)
//     {
//         answer.push_back('0');
//         return answer;
//     }
//     while (bint3 > 0)
//     {
//         if (bint3 % 10 == 3)
//         {
//             bint3 += 10;
//             answer.push_back('1');
//         }
//         else if (bint3 % 10 == 2)
//         {
//             bint3 += 10;
//             answer.push_back('0');
//         }
//         else if (bint3 % 10 == 1)
//         {
//             answer.push_back('1');
//         }
//         else if (bint3 % 10 == 0)
//         {
//             answer.push_back('0');
//         }
//         bint3 /= 10;
//     }
//     for (int i = 0; i <= answer.size() / 2; i++)
//     {
//         swap(answer[i], answer[answer.size() - 1 - i]);
//     }
//     return answer;
// }

#pragma endregion

#pragma region 행렬의 덧셈

// #include <vector>
// 
// using namespace std;
// 
// vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
// {
//     vector<vector<int>> answer;
//     vector<int> nul;
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         answer.push_back(nul);
//         for (int j = 0; j < arr1[i].size(); j++)
//         {
//             answer[i].push_back(0);
//             answer[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자열 다루기 기본

// #include <string>
// #include <iostream>
// 
// using namespace std;
// 
// bool solution(string s)
// {
//     if (s.size() == 4 || s.size() == 6)
//     {
//         for (int i = 0; i < s.size(); i++)
//         {
//             if ((s[i] <= 90 && s[i] >= 65) || (s[i] <= 122 && s[i] >= 97))
//                 return false;
//         }
//         return true;
//     }
//     return false;
// }

#pragma endregion

#pragma region 부족한 금액 계산하기

// using namespace std;
// 
// long long solution(int price, int money, int count)
// {
//     long long answer = (1 + count) * count / 2;
//     answer *= price;
//     answer -= money;
// 
//     if (answer < 0)
//         answer = 0;
// 
//     return answer;
// }

#pragma endregion

#pragma region JadenCase 문자열 만들기

// #include <string>
// 
// using namespace std;
// 
// string solution(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] > 64 && s[i] < 91)
//         {
//             if (s[i - 1] != ' ')
//             {
//                 s[i] = s[i] + 32;
//             }
//         }
//         if (s[i] == ' ')
//         {
//             if (s[i + 1] > 96 && s[i + 1] < 123)
//             {
//                 s[i + 1] = s[i + 1] - 32;
//             }
//         }
//         if (s[0] > 96 && s[0] < 123)
//         {
//             s[0] = s[0] - 32;
//         }
//     }
//     return s;
// }

#pragma endregion

#pragma region 최솟값 만들기

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> A, vector<int> B)
// {
//     int answer = 0;
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end(), greater<int>());
// 
//     for (int i = 0; i < A.size(); i++)
//     {
//         answer += A[i] * B[i];
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 최대공약수와 최소공배수

// #include <vector>
// 
// using namespace std;
// 
// int small(int n, int m)
// {
//     if (n % m == 0)
//     {
//         return m;
//     }
//     else if (m % n == 0)
//     {
//         return n;
//     }
//     else
//     {
//         int a = n > m ? n : m;
//         int b = 1;
//         for (int i = 0; i < a; i++)
//         {
//             if (n % (i + 1) == 0 && m % (i + 1) == 0)
//                 b = i + 1;
//         }
//         return b;
//     }
// }
// 
// int big(int n, int m)
// {
//     if (n % m == 0)
//     {
//         return n;
//     }
//     else if (m % n == 0)
//     {
//         return m;
//     }
//     else
//     {
//         int a = small(n, m);
//         int b = n / a;
// 
//         return b * m;
//     }
// }
// 
// vector<int> solution(int n, int m)
// {
//     vector<int> answer;
//     answer.push_back(small(n, m));
//     answer.push_back(big(n, m));
// 
//     return answer;
// }

#pragma endregion

#pragma region 올바른 괄호

// #include <string>
// 
// using namespace std;
// 
// bool solution(string s)
// {
//     int stack = 0;
//     int check = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[0] == ')')
//             return false;
//         if (s[i] == '(')
//             stack++;
//         else
//             stack--;
//         if (stack == 0)
//         {
//             check = i + 1;
//             if (s[check] == ')')
//                 return false;
//         }
// 
//     }
//     if (stack != 0)
//         return false;
//     else
//         return true;
// }

#pragma endregion

#pragma region 예산

// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(vector<int> d, int budget)
// {
//     sort(d.begin(), d.end());
// 
//     int acc = 0;
// 
//     for (int i = 0; i < d.size(); i++)
//     {
//         if (acc + d[i] > budget)
//             return i;
//         acc += d[i];
//     }
// 
//     return d.size();
// }

#pragma endregion

#pragma region 캐릭터의 좌표

// #include <string>
// #include <vector>
// #include <math.h>
// 
// using namespace std;
// 
// vector<int> solution(vector<string> keyinput, vector<int> board)
// {
//     vector<int> answer;
//     int x = 0;
//     int y = 0;
// 
//     for (int i = 0; i < keyinput.size(); i++)
//     {
//         if (keyinput[i][0] == 'u' && abs(y) < abs(board[1] / 2))
//         {
//             y++;
//         }
//         else if (keyinput[i][0] == 'u' && y == -abs(board[1] / 2))
//         {
//             y++;
//         }
//         if (keyinput[i][0] == 'd' && abs(y) < abs(board[1] / 2))
//         {
//             y--;
//         }
//         else if (keyinput[i][0] == 'd' && y == abs(board[1] / 2))
//         {
//             y--;
//         }
//         if (keyinput[i][0] == 'l' && abs(x) < abs(board[0] / 2))
//         {
//             x--;
//         }
//         else if (keyinput[i][0] == 'l' && x == abs(board[0] / 2))
//         {
//             x--;
//         }
//         if (keyinput[i][0] == 'r' && abs(x) < abs(board[0] / 2))
//         {
//             x++;
//         }
//         else if (keyinput[i][0] == 'r' && x == -abs(board[0] / 2))
//         {
//             x++;
//         }
//     }
//     answer.push_back(x);
//     answer.push_back(y);
// 
//     return answer;
// }

#pragma endregion

#pragma region 같은 숫자는 싫어

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> arr)
// {
//     vector<int> answer;
//     int temp = -1;
// 
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] != temp)
//         {
//             answer.push_back(arr[i]);
//             temp = arr[i];
//         }
//     }
//     return answer;
// }

#pragma endregion

#pragma region 종이 자르기

// using namespace std;
// 
// int solution(int M, int N)
// {
//     return M * N - 1;
// }

#pragma endregion

#pragma region 문자열 계산하기

// #include <string>
// 
// using namespace std;
// 
// int solution(string my_string)
// {
//     int answer = 0;
//     string temp = "";
//     bool minus = false;
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         if (my_string[i] == ' ' && minus == true)
//         {
//             answer -= stoi(temp);
//             temp = "";
//             if (my_string[i + 1] == '+')
//                 minus = false;
//             i += 2;
//             continue;
//         }
//         else if (my_string[i] == ' ' && minus == false)
//         {
//             answer += stoi(temp);
//             temp = "";
//             if (my_string[i + 1] == '-')
//                 minus = true;
//             i += 2;
//             continue;
//         }
//         else
//         {
//             temp.push_back(my_string[i]);
//         }
//     }
//     if (minus == true)
//     {
//         answer -= stoi(temp);
//     }
//     if (minus == false)
//     {
//         answer += stoi(temp);
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자열 밀기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// int solution(string A, string B)
// {
//     vector<string> C;
//     C.push_back(A);
//     for (int i = 0; i < A.size(); i++)
//     {
//         if (C[i] == B)
//             return i;
//         C.push_back("");
//         C[i + 1].push_back(C[i][C[i].size() - 1]);
//         for (int j = 0; j < C[i].size() - 1; j++)
//         {
//             C[i + 1].push_back(C[i][j]);
//         }
//     }
//     return -1;
// }

#pragma endregion

#pragma region 이상한 문자 만들기

// #include <string>
// 
// using namespace std;
// 
// string solution(string s)
// {
//     int count = 0;
// 
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == ' ')
//         {
//             count = 0;
//             continue;
//         }
//         if (count % 2 == 0)
//         {
//             count++;
//             if (s[i] > 96)
//             {
//                 s[i] = s[i] - 32;
//             }
//             continue;
//         }
//         if (count % 2 == 1)
//         {
//             count++;
//             if (s[i] < 96)
//             {
//                 s[i] = s[i] + 32;
//             }
//             continue;
//         }
//     }
// 
//     return s;
// }

#pragma endregion

#pragma region 대문자로 바꾸기

// #include <string>
// 
// using namespace std;
// 
// string solution(string myString)
// {
//     for (int i = 0; i < myString.size(); i++)
//     {
//         if (myString[i] > 96)
//             myString[i] = myString[i] - 32;
//     }
// 
//     return myString;
// }

#pragma endregion

#pragma region 문자열로 변환

// #include <string>
// 
// using namespace std;
// 
// string solution(int n)
// {
//     string answer = to_string(n);
//     return answer;
// }

#pragma endregion

#pragma region 문자열의 앞의 n글자

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string, int n)
// {
//     string answer = "";
//     for (int i = 0; i < n; i++)
//     {
//         answer.push_back(my_string[i]);
//     }
//     return answer;
// }

#pragma endregion

#pragma region 문자열 정수의 합

// #include <string>
// 
// using namespace std;
// 
// int solution(string num_str)
// {
// 	int answer = 0;
// 	while (num_str.size() > 0)
// 	{
// 		string last = "0";
// 		last.push_back(num_str[num_str.size() - 1]);
// 		answer += stoi(last);
// 		num_str.pop_back();
// 	}
// 	return answer;
// }

#pragma endregion

#pragma region rny_string

// #include <string>
// 
// using namespace std;
// 
// string solution(string rny_string)
// {
//     string answer = "";
//     string rn = "rn";
// 
//     for (int i = 0; i < rny_string.size(); i++)
//     {
//         answer.push_back(rny_string[i]);
//         if (rny_string[i] == 'm')
//         {
//             answer.pop_back();
//             answer.push_back(rn[0]);
//             answer.push_back(rn[1]);
//         }
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region n 번째 원소부터

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> num_list, int n)
// {
//     vector<int> answer;
// 
//     for (int i = n-1; i < num_list.size(); i++)
//     {
//         answer.push_back(num_list[i]);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 마지막 두 원소
// 
// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> num_list)
// {
//     if (num_list[num_list.size() - 1] > num_list[num_list.size() - 2])
//         num_list.push_back(num_list[num_list.size() - 1] - num_list[num_list.size() - 2]);
//     else
//         num_list.push_back(num_list[num_list.size() - 1] * 2);
//     return num_list;
// }
// 
#pragma endregion

#pragma region 첫 번째로 나오는 음수
// 
// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> num_list)
// {
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         if (num_list[i] < 0)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// 
#pragma endregion

#pragma region 접두사인지 확인하기

// #include <string>
// 
// using namespace std;
// 
// int solution(string my_string, string is_prefix)
// {
//     for (int i = 0; i < is_prefix.size(); i++)
//     {
//         if (is_prefix[i] != my_string[i])
//             return 0;
//     }
//     return 1;
// }

#pragma endregion

#pragma region 문자열의 뒤의 n글자

// #include <string>
// 
// using namespace std;
// 
// string solution(string my_string, int n)
// {
//     string answer = "";
//     for (int i = my_string.size() - n; i < my_string.size(); i++)
//     {
//         answer.push_back(my_string[i]);
//     }
//     return answer;
// }

#pragma endregion

#pragma region n보다 커질 때까지 더하기

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> numbers, int n)
// {
//     int answer = 0;
//     int i = 0;
// 
//     while (answer <= n)
//     {
//         answer += numbers[i];
//         i++;
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 조건에 맞게 수열 변환하기 3

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> arr, int k)
// {
// 	if (k % 2 == 0)
// 	{
// 		for (int i = 0; i < arr.size(); i++)
// 		{
// 			arr[i] += k;
// 		}
// 	}
// 	else
// 	{
// 		for (int i = 0; i < arr.size(); i++)
// 		{
// 			arr[i] *= k;
// 		}
// 	}
// 	return arr;
// }

#pragma endregion

#pragma region 길이에 따른 연산

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> num_list)
// {
// 	int answer = 0;
// 
// 	if (num_list.size() > 10)
// 	{
// 		answer = 0;
// 		for (int i = 0; i < num_list.size(); i++)
// 		{
// 			answer += num_list[i];
// 		}
// 	}
// 	else
// 	{
// 		answer = 1;
// 		for (int i = 0; i < num_list.size(); i++)
// 		{
// 			answer *= num_list[i];
// 		}
// 	}
// 	return answer;
// }

#pragma endregion

#pragma region 수 조작하기 1

// #include <string>
// 
// using namespace std;
// 
// int solution(int n, string control)
// {
//     for (int i = 0; i < control.size(); i++)
//     {
//         if (control[i] == 'w')
//             n += 1;
//         else if (control[i] == 's')
//             n -= 1;
//         else if (control[i] == 'd')
//             n += 10;
//         else
//             n -= 10;
//     }
// 
//     return n;
// }

#pragma endregion

#pragma region 부분 문자열인지 확인하기
// 
// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(string my_string, string target)
// {
// 	string::iterator it;
// 	it = search(my_string.begin(), my_string.end(), target.begin(), target.end());
// 	if (it != my_string.end())
// 		return 1;
// 	return 0;
// }
// 
#pragma endregion

#pragma region 이어 붙인 수

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> num_list)
// {
//     int a = 0;
//     int b = 0;
// 
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         if (num_list[i] % 2 == 0)
//             a = num_list[i] + a * 10;
//         else
//             b = num_list[i] + b * 10;
//     }
// 
//     return a+b;
// }

#pragma endregion

#pragma region 카운트 업

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int start, int end)
// {
//     vector<int> answer;
// 
//     for (int i = start; i <= end; i++)
//     {
//         answer.push_back(i);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 공백으로 구분하기 1

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<string> solution(string my_string)
// {
//     vector<string> answer;
//     string container = "";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         if (my_string[i] == ' ')
//         {
//             answer.push_back(container);
//             container = "";
//         }
//         else
//             container.push_back(my_string[i]);
//     }
//     answer.push_back(container);
// 
//     return answer;
// }

#pragma endregion

#pragma region 조건에 맞게 수열 변환하기 1

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] >= 50 && arr[i] % 2 == 0)
//         {
//             arr[i] /= 2;
//         }
//         else if (arr[i] < 50 && arr[i] % 2 != 0)
//         {
//             arr[i] *= 2;
//         }
//     }
// 
//     return arr;
// }

#pragma endregion

#pragma region 카운트 다운

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int start, int end)
// {
//     vector<int> answer;
// 
//     for (int i = start; i >= end; i--)
//     {
//         answer.push_back(i);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 배열 만들기 1

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(int n, int k)
// {
//     vector<int> answer;
// 
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % k == 0)
//             answer.push_back(i);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 원소들의 곱과 합

// #include <vector>
// 
// using namespace std;
// 
// int solution(vector<int> num_list)
// {
//     int a = 1;
//     int b = 0;
//     
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         a *= num_list[i];
//         b += num_list[i];
//     }
//     b *= b;
// 
//     if (a < b)
//         return 1;
//     else
//         return 0;
// }

#pragma endregion

#pragma region n개 간격의 원소들

// #include <vector>
// 
// using namespace std;
// 
// vector<int> solution(vector<int> num_list, int n)
// {
//     vector<int> answer;
// 
//     for (int i = 0; i < num_list.size(); i++)
//     {
//         if (i % n == 0)
//             answer.push_back(num_list[i]);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 접미사인지 확인하기

// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(string my_string, string is_suffix)
// {
// 	int start = my_string.size() - is_suffix.size();
// 
// 	if (equal(my_string.begin() + start, my_string.end(), is_suffix.begin()))
// 		return 1;
// 	return 0;
// }

#pragma endregion

#pragma region 꼬리 문자열
// 
// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// string solution(vector<string> str_list, string ex)
// {
//     string answer = "";
//     vector<bool> checks;
// 
//     for (int i = 0; i < str_list.size(); i++)
//     {
//         for (int j = 0; j < str_list[i].size(); j++)
//         {
//             bool not_same = true;
//             if (str_list[i][j] == ex[0])
//             {
//                 int count = 0;
//                 while (true)
//                 {
//                     count++;
//                     if (count == ex.size())
//                         break;
//                     if (str_list[i][j + count] != ex[count])
//                         break;
//                 }
//                 if (count == ex.size())
//                 {
//                     not_same = false;
//                     checks.push_back(not_same);
//                     break;
//                 }
//             }
//             if (j == str_list[i].size() - 1 && not_same == true)
//             {
//                 checks.push_back(not_same);
//             }
//         }
//     }
//     for (int i = 0; i < checks.size(); i++)
//     {
//         if (checks[i] == true)
//         {
//             for (int j = 0; j < str_list[i].size(); j++)
//             {
//                 answer.push_back(str_list[i][j]);
//             }
//         }
//     }
// 
//     return answer;
// }
// 
#pragma endregion

#pragma region 배열에서 문자열 대소문자 변환하기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<string> solution(vector<string> strArr)
// {
//     for (int i = 0; i < strArr.size(); i++)
//     {
//         for (int j = 0; j < strArr[i].size(); j++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (strArr[i][j] < 91)
//                 {
//                     strArr[i][j] += 32;
//                 }
//             }
//             if (i % 2 == 1)
//             {
//                 if (strArr[i][j] > 96)
//                 {
//                     strArr[i][j] -= 32;
//                 }
//             }
//         }
//     }
// 
//     return strArr;
// }

#pragma endregion

#pragma region 글자 이어 붙여 문자열 만들기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// string solution(string my_string, vector<int> index_list)
// {
//     string answer = "";
// 
//     for (int i = 0; i < index_list.size(); i++)
//     {
//         answer.push_back(my_string[index_list[i]]);
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 공백으로 구분하기 2

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// vector<string> solution(string my_string)
// {
//     vector<string> answer;
//     string extra = "";
// 
//     for (int i = 0; i < my_string.size(); i++)
//     {
//         if (my_string[i] > 64 && my_string[i] < 91)
//         {
//             extra.push_back(my_string[i]);
//         }
//         else if (my_string[i] > 96 && my_string[i] < 123)
//         {
//             extra.push_back(my_string[i]);
//         }
//         else
//         {
//             if (extra != "")
//             {
//                 answer.push_back(extra);
//                 extra = "";
//             }
//         }
//     }
//     if (extra != "")
//     {
//         answer.push_back(extra);
//         extra = "";
//     }
// 
//     return answer;
// }

#pragma endregion

#pragma region 문자열 바꿔서 찾기

// #include <string>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int solution(string myString, string pat)
// {
//     for (int i = 0; i < myString.size(); i++)
//     {
//         if (myString[i] == 65)
//         {
//             myString[i] = 66;
//         }
//         else
//         {
//             myString[i] = 65;
//         }
//     }
// 
//     for (int i = 0; i < myString.size(); i++)
//     {
//         if (myString[i] == pat[0])
//         {
//             for (int j = 1; j < pat.size(); j++)
//             {
//                 if (myString[i + j] != pat[j])
//                 {
//                     break;
//                 }
//                 else if (j == pat.size() - 1)
//                 {
//                     return 1;
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
//         }
//     }
//     return 0;
// }

#pragma endregion

#pragma region 원하는 문자열 찾기

// #include <string>
// #include <vector>
// 
// using namespace std;
// 
// bool next(char mS, char p)
// {
//     if (mS == p)
//         return true;
//     else if (mS == p + 32)
//         return true;
//     else if (mS == p - 32)
//         return true;
//     else
//         return false;
// }
// 
// int solution(string myString, string pat)
// {
//     for (int i = 0; i < myString.size(); i++)
//     {
//         if (next(myString[i], pat[0]) == true)
//         {
//             for (int j = 0; j < pat.size(); j++)
//             {
//                 if (next(myString[i + j], pat[j]) == true)
//                 {
//                     if (j + 1 == pat.size())
//                         return 1;
//                     continue;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

#pragma endregion

#pragma region 부분 문자열

// #include <string>
// 
// using namespace std;
// 
// int solution(string str1, string str2)
// {
//     for (int i = 0; i < str2.size(); i++)
//     {
//         if (str2[i] == str1[0])
//         {
//             int count = 1;
//             for (int j = 1; j < str1.size(); j++)
//             {
//                 if (str2[i + j] == str1[j])
//                 {
//                     count++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             if (count == str1.size())
//                 return 1;
//         }
//     }
// 
//     return 0;
// }

#pragma endregion

#pragma region 배열 비교하기

// #include <vector>
// 
// using namespace std;
// 
// int sum(vector<int> arr)
// {
//     int result = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         result += arr[i];
//     }
//     return result;
// }
// 
// int solution(vector<int> arr1, vector<int> arr2)
// {
//     if (arr1.size() > arr2.size())
//         return 1;
//     else if (arr1.size() < arr2.size())
//         return -1;
//     else
//     {
//         if (sum(arr1) > sum(arr2))
//             return 1;
//         else if (sum(arr1) < sum(arr2))
//             return -1;
//         else
//             return 0;
//     }
// }

#pragma endregion

#pragma region 특정한 문자를 대문자로 바꾸기



#pragma endregion