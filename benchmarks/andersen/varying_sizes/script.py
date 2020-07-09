rel_names = ["addr", "assgn", "store", "load", "pt"]

for x in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100]:
	fname = 'andersen.d.' + str(x)
	f = open(fname, "r")
	lines = f.read().splitlines()
	f.close()
	out_dir = str(x)
	assert lines[0].startswith("V: ")
	assert lines[1] == ""
	i = 2
	for r, rel_name in enumerate(rel_names):
		if r == len(rel_names) - 1:
			prefix = rel_name
			fname = rel_name + ".expected"
		else:
			prefix = "*" + rel_name
			fname = rel_name + ".facts"
		assert lines[i].startswith(prefix)
		i += 1
		f = open(out_dir + "/" + fname, "w")
		while (lines[i] != "."):
			s = lines[i].replace(",", "\t")
			f.write(s)
			f.write("\n")
			i += 1
		i += 1
		f.close()

