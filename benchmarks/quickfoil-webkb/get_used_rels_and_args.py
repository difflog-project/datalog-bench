import re
import sys

fname = sys.argv[1]
rels = {}
with open(fname, 'r') as dl_file:
    s = ""
    dl_file_lines = []
    for line in dl_file.readlines():
        s += line
        dl_file_lines.append(line)
    # print(s)
    rel_set = re.findall(r"([a-z].*?)\((.*?)\)", s)
    for pair in rel_set:
        rel_name = pair[0]
        if rel_name not in rels:
            numargs = len(pair[1].split(", "))
            rels[rel_name] = numargs
    for rel in rels:
        print(".decl " + rel + "(" + ", ".join([ "arg_"+str(x)+": symbol" for x in range(rels[rel]) ]) + ")")
        if rel == "student_page" or rel == "department_of":
            print(".output " + rel)
        else:
            print(".input " + rel)

    for line in dl_file_lines:
        print(line.rstrip() + ".")
