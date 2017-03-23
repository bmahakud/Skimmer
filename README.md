This will provide all the information if you want to skim a larger root file to a smaller root by applying few branches and some cuts.

Step1. Edit the InputDetails.dat file according to your need

Step2. Execute the following command to create a ClassReadTree.cc using which you will read the Ntuple.The command is below
```
./Main.sh InputROOTfile.root  TreeMaker2/PreSelection
```
In the above command "TreeMaker2" is the directory name inside the root file and "PreSelection" is the Tree name.If you do not have any directory inside root file ..then give only the Tree name

Step3.
```
python MakeMasterReader.py
```
Above command will create a ROOT macro named Skimmer.C which will contain relevant lines of code to read the set of Input Ntuples and make a smaller root file
Step4.
Now you can run the Skimmer.C in your terminal by executing the following command 

```
root -l Skimmer.C
```
# Skimmer
