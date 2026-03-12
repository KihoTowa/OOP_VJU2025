import time
current_time=time.time()
MinutesHavePast=current_time//60
HoursHavePast=MinutesHavePast//60
DaysHavePast=HoursHavePast//24
YearsHavePast=DaysHavePast//365

Temp_day=DaysHavePast-((YearsHavePast*365)+(YearsHavePast//4))
Temp_hours=HoursHavePast-DaysHavePast*24
Temp_minutes=MinutesHavePast-HoursHavePast*60

DaysinMonth = [31,28,31,30,31,30,31,31,30,31,30,31]
CurrentYear=YearsHavePast+1970
CurrentHours=Temp_hours+7
CurrentSeconds=current_time-MinutesHavePast*60
CurrentMinutes=Temp_minutes
CurrentMonth = 1
CurrentDay = 1

if(CurrentYear%4==0):
    DaysinMonth[1]=29
for day in DaysinMonth:
    if Temp_day>day:
        Temp_day=Temp_day-day
        CurrentMonth+=1
    else:
        break
CurrentDay+=Temp_day

print(f"Current time in Viet Nam is {round(CurrentDay)} / {CurrentMonth} / {round(CurrentYear)}, "
      f"{round(CurrentHours)} : {round(CurrentMinutes)} : {round(CurrentSeconds)}")