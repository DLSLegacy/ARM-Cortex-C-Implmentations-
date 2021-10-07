He110 W0rld

Directives 
        PRESERVES 
        THUMB ;  


            AREA RESET,DATA,READONLY 
            Export __Vectors 

_Vectors DCD 0x20002000 
         DCD Reset_Handler 

         ALIGN TO


         AREA MYCODE,CODE,READONLY 
         ENTRY  
         EXPORT      Reset_Handler 


Reset_Handler  
            MOV32    R1,  #0x000000001 

            MOV32    R2,  #0x000000002 


            ADD      R0, R1, R2 


            S        Reset_Handler 

            ALIGN 

            END 
