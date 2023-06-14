import pandas as pd
import openpyxl
import xlrd
xlsx_file = input("input name of .xlsx>>")
csv_file = "csv_file\\" +xlsx_file + ".csv"
xlsx_file = "xlsx_file\\" + xlsx_file + ".xlsx"
xlsx = pd.read_excel(xlsx_file)
xlsx.to_csv(csv_file)