#include <iostream>
#include <fstream>

void	replaceInLine(std::string &line, std::string s1, std::string s2)
{
	size_t	pos = line.find(s1);

	while (42)
	{
		if (pos != std::string::npos)
		{
			std::string newLine = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			line = newLine;
			pos = line.find(s1, pos + s2.length());
		}
		else
			break ;
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "This program takes 3 arguments. A filename and two string s1 and s2" << std::endl;
		return 1;
	}
	std::string srcFileName = av[1];
	std::string dstFileName = srcFileName + ".replace";
	std::ifstream srcFile;
	srcFile.open(srcFileName.c_str());
	if (!srcFile)
	{
		std::cerr << "Error opening source file" << std::endl;
		return 1;
	}
	std::ofstream dstFile;
	dstFile.open(dstFileName.c_str());
	if (!dstFile)
	{
		std::cerr << "Error creating or opening destination file" << std::endl;
		return 1;
	}
	std::string line;
	while (getline(srcFile, line))
	{
		replaceInLine(line, (std::string)av[2], (std::string)av[3]);
		dstFile << line << std::endl;
	}
	srcFile.close();
	dstFile.close();
	return 0;
}
