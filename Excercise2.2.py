import math
#problem 1
pi=math.pi
def sphereVolume(R):
    return (4/3)*pi*R**2
print(f"Volume of a sphere with radius 5 is {sphereVolume(5)}")

#problem2
price_each=29.45
total_price_book = price_each * 60
after_discount = total_price_book *0.4
total_shipping_cost = 3 + 59*0.75
total_price = after_discount + total_shipping_cost
total_price = f"{total_price:.2f}"
int_part, frac_part = str(total_price).split(".")
print(f"The wholesalse cost for 60 copies are " 
      f"{int_part}$ {frac_part} cent")

#problem3
velocity_easypace = 8*60+15
velocity_tempo = 7*60+12
total_time_spent = 2*velocity_easypace + 3*velocity_tempo
convert_to_sec = 6*3600+52*60
have_ran = convert_to_sec + total_time_spent
hours = have_ran//3600
minutes =(have_ran-hours*3600)//60

print(f"You will get home for break fast at {hours}:{minutes}")