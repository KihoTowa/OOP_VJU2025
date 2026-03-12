A=42
B=42
print(f"How many seconds in {A} minutes and {B} seconds")
CONVERTSECONDS=A*60+B
print(f"It is {CONVERTSECONDS} seconds")
C=10
print(f"How many miles in {C} kilometres?")
MILE=C/1.61
MILE=round(MILE,2)

seconds_per_mile = CONVERTSECONDS/MILE
minutes_per_mile = seconds_per_mile//60
seconds_per_mile = seconds_per_mile - minutes_per_mile*60

print(f"There is {MILE} miles in 10 kilometres")
print(f"If you run a {C} kilometer race in {A} minutes and {B} seconds")
print(f"Your average pace is {round(minutes_per_mile)} minutes " 
      f"{round(seconds_per_mile)} seconds per mile")
temp_seconds = minutes_per_mile*60+seconds_per_mile
print(f"Your average pace in miles per hour is {round(3600/temp_seconds,2)} miles per hour")
