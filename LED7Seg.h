/**
  ******************************************************************************
  * @file    boiler/LED7Seg.h 
  * @author  Oleg Terekh
  * @version V1.310117
  * @date    01/02/2017
  * @brief   Main program body
   ******************************************************************************
  * @attention

  ******************************************************************************
  */ 
 

                  //     a
#define cA  0x10 //     ---
#define cB  0x02 // f |     | b
#define cC  0x08 //   |  g  |
#define cD  0x80 //     ---
#define cE  0x20 // e |     | c
#define cF  0x40 //   |     |
#define cG  0x01 //     ---  *
#define cDP 0x04 //      d    DP

#define zn0  (cA+cB+cC+cD+cE+cF)//0
#define zn1  (cB+cC)//1
#define zn2  (cA+cB+cD+cE+cG) //2
#define zn3  (cA+cB+cC+cD+cG) //3
#define zn4  (cB+cC+cF+cG)//4
#define zn5  (cA+cC+cD+cF+cG)//5
#define zn6  (cA+cC+cD+cE+cF+cG)//6
#define zn7  (cA+cB+cC) //7
#define zn8  (cA+cB+cC+cD+cE+cF+cG)//8
#define zn9  (cA+cB+cC+cD+cF+cG)//9
#define znDP (cDP)//
#define znNONE 0x00 //
#define znMINUS (cG)
 
#define znA   (cA+cB+cC+cE+cF+cG)
#define znB   (cC+cD+cE+cF+cG)
#define znC   (cA+cD+cE+cF)
#define znD   (cB+cC+cD+cE+cG)
#define znE   (cA+cD+cE+cF+cG)
#define znF   (cA+cE+cF+cG)
#define znG   (cA+cC+cD+cE+cF)
#define znH   (cB+cC+cE+cF+cG)
#define znI   (cE+cF)
#define znL   (cD+cE+cF)
#define znH   (cB+cC+cE+cF+cG)
#define znO   (cA+cB+cC+cD+cE+cF)
#define znP   (cA+cB+cE+cF+cG)
#define znS   (cA+cC+cD+cF+cG)
#define znT   (cD+cE+cF+cG)
#define znU   (cB+cC+cD+cE+cF)
#define znY   (cB+cC+cD+cF+cG)
#define znr   (cG + cE)
#define znu   (cD + cE+ cC)
#define zni   (cA + cE+ cD)
#define zno   (cG + cC+ cE+ cD)
#define znn   (cG + cC+ cE)
#define znc   (cG + cE+ cD)
#define znck  (cA + cF + cG)


struct ShiftRegister_Struct
{
  char Segments[3]; // 0 - IND1 digital, 1 - IND2 digital, 2 - IND3 leds
  char CurrSeg; //current segment, for dinamic indication
};


/*********************************END OF FILE************************************/