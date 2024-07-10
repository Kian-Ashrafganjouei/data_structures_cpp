CXX = g++
CXXFLAGS = -g -Wall -std=c++11

SRCS = main.cpp Movies.cpp Movie.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = myprogram

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
