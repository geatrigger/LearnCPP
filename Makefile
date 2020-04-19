CC=g++
CFLAGS= -c -o
# LDFLAGS=<링크 옵션>
# LDLIBS=<링크 라이브러리 목록>
BUILD=./build
OBJS=$(BUILD)/main.o $(BUILD)/foo.o
TARGET=$(BUILD)/app.out
 
all: $(TARGET)
 
clean:
	rm -f *.o
	rm -f $(TARGET)
 
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(BUILD)/main.o: foo.h main.cpp
	$(CC) $(CFLAGS) $(BUILD)/main.o main.cpp
$(BUILD)/foo.o: foo.h foo.cpp
	$(CC) $(CFLAGS) $(BUILD)/foo.o foo.cpp
