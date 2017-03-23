import sys
sys.stdout = open('Skimmer.C','w')

############    include Header files    ##########################
print '#include<iostream>\n#include <TROOT.h>\n#include <TChain.h>\n#include <TFile.h>\n#include "TLorentzVector.h"\n#include<vector>\n#include "TTree.h"\n#include "ClassReadTree.cc"\nusing namespace std;\n\n'



print 'void Skimmer(){\n '

############    Start:: Reading the input file where variables stored    ##########################

def getVarFromFile(filename):
    import imp
    f = open(filename)
    global data
    data = imp.load_source('data', '', f)
    f.close()

getVarFromFile('InputDetails.dat')




    

fr = open("ClassReadTree.cc")

linenum=100000

print 'TFile *fn=new TFile("Skim.root","RECREATE");'
print 'TTree *tree =new TTree("SkimmedTree","My SkimmedTree");'

leaftype=[]
leafname=[]


for i, line in enumerate(fr):
    #print i, line
    if "// Declaration of leaf types" in line:
        linenum=i
    #print "line number: ",i," start num: ", linenum
    if " // List of branches" in line:
        break    
    
    if i > linenum:
        #print i
        #print line
        
        for j,word in enumerate(line.split()):
            if(j==0):            
               leaftype.append(word)
            if(j==1):
               oldstr=str(word)
               newstr = oldstr.replace(";", "") 
               leafname.append(newstr)


import sys
if len(leaftype)==len(leafname):
   for il in range(0,len(leaftype)):
      if leafname[il] in data.SelVars:
         print leaftype[il],"    ",leafname[il],";"
         print 'tree->Branch("',;sys.stdout.softspace=False;print leafname[il],;sys.stdout.softspace=False;print '" , &',leafname[il],');'

    
        


print '\tTChain* tr = new TChain("%s");'% (data.treeName)
for a in range(0,len(data.list_samples)):
    print '\t\ttr->Add("%s%s");'%( data.store_samples, data.list_samples[a])
print '\t\tClassReadTree read(tr);'
print '\t\tfor(int iEv=0;iEv < tr->GetEntries();iEv++){'
print '\t\t\ttr->GetEntry(iEv);'  

for b in range(0, len(leafname)):
   if leafname[b] in data.SelVars:
       print leafname[b],' = read.',leafname[b],";"
print "tree->Fill();" 


print '\t\t}'
print '\n'
print "fn->Write();"






print '\n}'


