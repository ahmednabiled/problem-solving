#!/usr/bin/env python3

import re
import sys

def slugify(text: str) -> str:
    slug = re.sub(r'[^a-zA-Z0-9]+', '-', text.lower()).strip('-')
    return slug

def main():
    if len(sys.argv) < 2:
        print("Usage: slugify.py \"Your Title Here\"")
        sys.exit(1)

    input_text = " ".join(sys.argv[1:])
    print(slugify(input_text))

if __name__ == "__main__":
    main()
