# 수박수박수박수박수박수?
'''

def solution(n):
    answer = ''
    for i in range(0,n):
        if i % 2 == 1:
            answer = answer + '박'
        else:
            answer = answer + '수'
    
    return answer

'''

# 몫 구하기
'''

def solution(num1, num2):
    answer = num1 // num2
    return answer

'''

# 숫자 비교하기
'''

def solution(num1, num2):
    if num1 == num2:
        answer = 1
    else:
        answer = -1;
    
    return answer

'''

# 두 수의 곱
'''

def solution(num1, num2):
    answer = num1 * num2
    return answer

'''

# 두 수의 차
'''

def solution(num1, num2):
    answer = num1 - num2
    return answer

'''

# 나머지 구하기
'''

def solution(num1, num2):
    answer = num1 % num2
    return answer

'''

# 나이 출력
'''

def solution(age):
    answer = 2023 - age
    return answer

'''

# 두 수의 합
'''

def solution(num1, num2):
    answer = num1 + num2
    return answer

'''

# 각도기
'''

def solution(angle):
    if angle == 90:
        return 2
    if angle == 180:
        return 4
    if angle < 90:
        return 1
    else:
        return 3

'''

# 두 수의 나눗셈
'''

def solution(num1, num2):
    answer = num1 * 1000 // num2
    return answer

'''

# 짝수의 합
'''

def solution(n):
    answer = (n - (n % 2 > 0) + 2) * (n // 2) / 2
    return answer

'''

# 배열의 평균값
'''

def solution(numbers):
    answer = 0
    for i in range (0,len(numbers)):
        answer += numbers[i]
    return answer / len(numbers)

'''

# 양꼬치
'''

def solution(n, k):
    answer = 12000 * n + 2000 * k - 2000 * (n // 10)
    return answer

'''

# 피자 나눠 먹기 (1)
'''

def solution(n):
    if n % 7 == 0:
        return n / 7
    else:
        return n // 7 + 1

'''

# 머쓱이보다 키 큰 사람
'''

def solution(array, height):
    array.sort()
    for i in range(0, len(array)):
        if array[i] > height:
            return len(array) - i
    return 0

'''

# 최댓값 만들기(1)
'''

def solution(numbers):
    numbers.sort(reverse = True)
    return numbers[0] * numbers[1]

'''

# 배열 자르기
'''

def solution(numbers, num1, num2):
    return numbers[num1:num2+1]

'''

# 배열 뒤집기
'''

def solution(num_list):
    size = len(num_list)
    for i in range(0,size//2):
        num_list[i], num_list[size - 1 - i] = num_list[size - 1 - i], num_list[i]
    return num_list

'''

# 점의 위치 구하기
'''

def solution(dot):
    if dot[0] * dot[1] > 0:
        if dot[0] > 0:
            return 1
        else:
            return 3
    else:
        if dot[0] > 0:
            return 4
        else:
            return 2

'''

# 중복된 숫자의 개수
'''

def solution(array, n):
    answer = array.count(n)
    return answer

'''

# 배열 원소의 길이
'''

def solution(strlist):
    answer = []
    for i in range(0,len(strlist)):
        answer.append(len(strlist[i]))
    return answer

'''

# 
'''



'''