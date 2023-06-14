import pandas as pd
import datetime
from dateutil.relativedelta import relativedelta
import openpyxl
import xlrd
import time
def timeArrange(name):                              # date convert
    date = []
    df[name] = df[name].astype('str')
    df_his_date = df[name].str.split(' ')
    df[name] = df_his_date.str.get(0)
    df[name] = df[name].astype('str')
    for i in df[name]:
        temp = i.split('-')
        s_day = datetime.datetime(int(temp[0]), int(temp[1]), int(temp[2]))
        date.append(s_day)
    return date 

def yearIncome(year):
    income = []
    dif_3m = relativedelta(months = 3)

    set_end = datetime.datetime(year, 12, 31)
    set_start = datetime.datetime(year, 1, 1)

    for i in range(len(start)):
        # 마지막 돈 받는 날짜 설정 -> temp_end
        if(set_start > end[i]):          # 연도 시작 전에 만기이면 pass
            income.append(0)
            continue

        if(set_end >= end[i]):          # 연도 끝 전에 만기이면 
            temp_end = end[i]               # 만기일이 마지막 돈 받는 날짜
        else:                           # 아니면

            end_ = end[i]                   # 가장 가까운 날짜

            while(end_ > set_end):
                end_ -= dif_3m
            temp_end = end_

 
        if start[i] < set_start:           # 연도 시작 전에 매입했으면
            temp_start = set_start          # 연도 시작 시점으로 계산
        else:                           # 아니면
            temp_start = start[i]              # 매입 시점으로 연산
        
        # how many times?
        n = 1
        while(temp_start < temp_end - dif_3m):
            temp_end -= dif_3m
            n += 1
        
        
        # income calculation
        temp = ((value[i] * per[i] )/ 4 ) * n
        temp = format(temp, ',')
        income.append(temp)

    
    return income

xlsx_file = input(".xlsx 파일 이름을 입력(확장자명 빼고 작성) >>")
year = int(input("몇 년도까지 계산할까?(ex. 2024) >> "))
print("Converting to csv file...")

csv_file = xlsx_file + ".csv"
xlsx_file = xlsx_file + ".xlsx"
xlsx = pd.read_excel(xlsx_file)
xlsx.to_csv(csv_file)

pd.set_option('mode.chained_assignment',  None)         # ignore error
df = pd.read_csv(csv_file, encoding='utf-8')

df = df.rename(columns = df.iloc[1])                    # df column arrange
df = df.drop(df.index[0:2])
df['액면금액'] = df['액면금액'].astype('int') 
df['표면금리'] = df['표면금리'].astype('float') 

print("Arranging values...")

start = timeArrange('일시')
end = timeArrange('만기')
value = df['액면금액'].values.tolist()
per = df['표면금리'].values.tolist()

print("Calculating numbers...")
for i in range(2023, year + 1):
    temp = str(i) + "수익"
    df[temp] = yearIncome(i)

new_xlsx_file = xlsx_file + "_income.xlsx"
print("finish")
df.to_excel(new_xlsx_file)
time.sleep(3)