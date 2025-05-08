# Hexaflake

This is a C++ project that uses [SFML](https://www.sfml-dev.org/) (Simple and Fast Multimedia Library) to render graphics, handle input, and play sounds. This project demonstrates the use of recursion to generate a hexagonal snowflake pattern (Hexaflake) using SFML. The program draws layered hexagons based on user-defined size and depth, utilizing trigonometric functions and `sf::ConvexShape` for graphical rendering.

---

## Requirements

- **C++ compiler** (e.g., `g++`, `clang++`)
- **SFML 2.5.1+**

---

## 💻 Installation (macOS)

### Install SFML via Homebrew
```bash
brew install sfml
```

### Build Instructions
1. Clone or Download the Repository
```bash
git clone https://github.com/wubae/Hexaflake.git
cd Hexaflake
```

2. Build the Project Using `make`
```bash
make
```

3. Run the Program
```bash
./Hexa (size) (depth)
```

### Screenshot
![Screenshot](/screenshot.png)

Picture created with `./Hexa 300 3`.
