'''
과학과 소프트웨어적 사고
20191987 이세희
day class
'''
import time
import sys

class day:
    # 윤년 판별 함수
    def is_yon(self, Y):
        if (Y%400 == 0) or ((Y%4 == 0) and (not(Y%100 ==0))):
            return True
        else: 
            return False
    # x일 후 요일 구하기
    def after_x(self, year, month, day, x):
        #1년 1월 1일이 월요일이라는 것이 전제
        # 일 더하기
        D = day - 1

        # 월*일 더하기(+ 해당 연도 윤년 판별)
        month_day = [31, 28, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        if self.is_yon(year):
            del month_day[1]
        else:
            del month_day[2]
        for i in range(0, month - 1):
                D += month_day[i]
        
        # 연*일 더하기(+ 각 연도 윤년 판별) 
        for Y in range(1, year):
            if self.is_yon(Y):
                D += 366
            else:
                D += 365
        
        # 1000일 더하기
        D += x
        
        # 요일 구하기
        list_day_of_week = [1,2,3,4,5,6,0]
        day_of_week_x = list_day_of_week[D%7]
        
        #x일 후 날짜 구하기
        # 연도 구하기
        Y = 1
        while(D > 366):    
            if self.is_yon(Y):
                D -= 366
            else:
                D -= 365
            Y += 1        

        # 월, 일 구하기
        M = 1
        month_dayx = [31, 28, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        if self.is_yon(Y):
            del month_dayx[1]
        else:
            del month_dayx[2]
        i = 0
        while(D > 31 and i < len(month_dayx)-1):
            D -= month_day[i]
            i += 1
            M += 1
        # 일 구하기 
        D += 1
        
        # 결과값 안내
        print('>> {}년 {}월 {}일의 1000일 후는 {}년 {}월 {}일 {}요일 입니다.'.format(year, month, day, Y, M, D, day_of_week_x))

class Main:
    def main(self):
        d = day()

        # 요일 계산 대상 날짜 입력 후 함수 이용
        x = int(input('>> 원하는 일 수를 입력해주세요 : '))
        print('>> {}일 후의 날짜와 요일을 구하고 싶은 날짜를 쓰세요.\n>> 연.월.일:'.format(x), end = ' ')
        in_year, in_month, in_day = map(int,sys.stdin.readline().split('.'))
        d.after_x(in_year, in_month, in_day, x)

#main
m = Main()
m.main()