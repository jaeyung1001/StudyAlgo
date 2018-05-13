# 토끼와 당근밭을 불러올 모듈을 호출합니다.
from elicerabbits2 import *
from time import *

def hurry_rabbit_hurry(rabbit) :
    # 토끼가 서둘러 비를 막을 수 있도록 아래에 코드를 작성해주세요!
    while(rabbit.facing_north()==False):
        rabbit.turn_right()
    location = rabbit.get_pos()
    count = 0
    rabbit.move()
    while(True):
        if rabbit.left_is_clear():
            rabbit.drop_carrot()
            rabbit.move()
            if rabbit.left_is_clear():
                rabbit.turn_right()
                rabbit.turn_right()
                rabbit.move()
                rabbit.turn_right()
                rabbit.pick_carrot()
                
        # if rabbit.left_is_clear():
        #     rabbit.drop_carrot()
        if rabbit.front_is_clear():
            rabbit.move()
        if not rabbit.front_is_clear():
            rabbit.turn_right()
        if location == rabbit.get_pos():
            break
    return 0

def main():
    # main()은 수정할 필요가 없습니다. 
    # 토끼굴을 소환합니다. 
    load_world( "rain0.wld" )

    # 당근 10개를 들고 있는 토끼를 3, 6에 소환합니다. 
    rabbit = Rabbit(carrots = 10, avenue = 3, street = 6, orientation = "E")
    rabbit.set_trace("blue")
    rabbit.set_pause(0.1)
    hurry_rabbit_hurry(rabbit)


if __name__ == "__main__":
    main()