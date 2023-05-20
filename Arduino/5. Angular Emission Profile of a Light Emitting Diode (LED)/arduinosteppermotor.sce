//##  Setting up a communication protocol between SCILAB and Arduino and using it for data Acquisition.#############
h = openserial(3,"9600,n,8,1");//Establishing Serial communication port
disp('Please wait for four seconds'); 
sleep(3000); // Time to get the serial communication estblished
writeserial(h,'5');// To Start the rotation of stepper motor connected to arduino time in milliseconds is sent to get the data from arduino
q=[0 0];
while q(1)==0
[q,flags]=serialstatus(h); // Gives the serialstatus of the serial port
end
sleep(15000)  //Waiting time to get serial to be filled with data
buff=readserial(h); // read the data from serial port
y=tokens(buff,','); // converting data into a array
//disp(y);
data =strtod(y); //conversion of the data to double
//disp(data);
//X=buff(length(buff));// data at index Length of the data
//disp(X)
x=linspace(0,0.08789,length(data))
plot(x,data)
//t1=data(401);// time 1 data
//t2=data(402); //// time 1 data
//BR=(9600/(t2-t1)); //Baud rate calculation
//disp('Baud rate =',BR*1000)
closeserial(h)
