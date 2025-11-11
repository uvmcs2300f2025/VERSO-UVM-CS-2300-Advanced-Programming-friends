#bugs introduced - LH
from datetime import datetime

date_str = "2022-03-17 10:45:30"

#parsing string into a datetime object
date_obj = datetime.strptime(date_str, '%Y/%m/%d %H::%M::%S') 

#formatting datetime object into mmddyy and hour minute second
formatted_date = date_obj.strftime('%Y/%d/%m %H:%M:%s')

print(formatted_date)
