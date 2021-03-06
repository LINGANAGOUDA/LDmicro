#ifndef _COMPONENT_STRUCTS
#define _COMPONENT_STRUCTS

typedef struct SwitchStructTag
{
    int     id;
    int     Image;
    BOOL    Latched;                   //Temporary/Latched Action
    BOOL    NOpen;                     //Initial Open/Closed position
    BOOL    Open;
    char    Name[15];
    double  Volt[2];
    int     PinId[2];
}SwitchStruct;

typedef struct RelayStructTag
{
    int     id;
    int     Image;
    BOOL    NC;                        //Whether relay is operated
    double  MinOperatingVolt;             //Operating voltage
    double  MaxOperatingVolt;
    double  CoilVolt1;                 //Voltage at input pin
    double  CoilVolt2;                 //Voltage at input pin
    double  COMVolt;                   //Voltage at COM pin
    double  NOVolt;                    //Voltage at NO pin
    double  NCVolt; 
    int     PinId[5];                   //Voltage at NC pin

}RelayStruct;

#endif
