def main():
    word = input()
    repeat = False
    for i in range(len(word)-1):
        if word[i] =="s" and word[i+1]=="s":
            repeat=True
    if repeat == True:
        print("hiss")
    else:
        print("no hiss")

if __name__ == "__main__":
    main()
