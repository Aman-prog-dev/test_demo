
#### countinue date using datetime function ####
import datetime
# The size of each step in days
day= datetime.timedelta(days=1)
start= datetime.date.today()
end= start+ 10*day
for i in range((end- start).days):
 print(start + i*day)
