default: servicecodeinfo
CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = servicecodeinfo
all: $(TARGET)
$(TARGET): servicecodeinfo.c
$(CC) $(CFLAGS) -o $(TARGET) servicecodeinfo.c
clean:
rm -f $(TARGET)
.PHONY: all clean

What changed (briefly, so you know why)


Introduced variables (CC, CFLAGS, TARGET) → easier to maintain


Added compiler warnings and optimization flags ⚙️


Removed the leading “-” from rm → failures shouldn’t be silently ignored


Added .PHONY → avoids name conflicts with files


Kept it minimal and portable


If you want, I can extend this with:


install/uninstall targets


cross-compilation support


or GitHub Actions integration 🚀

