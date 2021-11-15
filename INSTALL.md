## Shared Library support
If wish to install your cpp_starter-based project as a shared library there are two methods.

## standard sudo make install

The following command will install all the targets specified in your CMakeLists.txt into the standard Linux areas for header files and binaries:

	sudo make install
However, quite often you will be upgrading **cpp_starter** so a better way to install **cpp_starter** is by using **sudo checkinstall**.

## sudo checkinstall
Since you will be working on different versions of **cpp_starter** it is important that you be able to make a clean uninstall, (when required) , To be able to uninstall you will need to install the Ubuntu **checkinstall** package: [here](https://help.ubuntu.com/community/CheckInstall). 

`sudo apt-get update && sudo apt-get install checkinstall`

With the **checkinstall** package installed your installation process now becomes:
    
     git git@github.com:perriera/<your_project>.git 
     cd <your_project>
     mkdir build
     cd build
     cmake ..
     make
     ./run-unittests
     sudo dpkg -r <your_project>
     sudo checkinstall
     
## Uninstall command
Assuming you installed **<your_project>** with **checkinstall** you may uninstall at any time with:

     sudo dpkg -r <your_project>

## PRODUCTION vs. DEBUG
Near line 57 of CMakeLists.txt you may specify a production version here:

	option(<YOUR_PROJECT>_PRODUCTION "Production build"  OFF)
	
In a PRODUCTION build of your project no DEBUG code is included in your installed code.

## important note on using shared libraries
After installation the **<your_prject>** library should be found in your **/usr/local/include** and your **/usr/local/lib** directories. Also, set **LD_LIBRARY_PATH**, (if you haven't already done so). 

     export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH

##  Ubuntu PPA support 
If you are interested in having <your_project> setup for deployment as a Ubuntu PPA, then this is a good starting point.

>
>  ### Adding a PPA using the command-line
>
>Make sure you have the package  **python-software-properties**  installed.
>
>**Step 1**: On the PPA's Launchpad page, look for the heading that reads "Adding this PPA to your system". Make a note of the PPA's location, which has the format  ppa:user/ppa-name.
>
> **Step 2**: Open a terminal and enter:
>
	sudo add-apt-repository ppa:user/ppa-name

> Replace  **'ppa:user/ppa-name**' with the PPA's location that you noted above.
>
> Your system will now fetch the PPA's key. This enables your system to verify that the packages in the PPA have not been interfered with since they were built.
>
> **Step 3**: Now, as a one-off, tell your system to pull down the latest list of software from each archive it knows about, including the PPA you just added:
>
> The Authentication tab lists the keys for your repositories (but not your PPAs). Note: PPAs do have keys but the system handles them automatically and they are not listed here.
>
> When you add a repository to your system's software sources the maintainer of the repository will normally tell you how to add the key.
>
> If the maintainer does not tell you how to add the key then you need to find the "key hash" of the repository in order to look up the key on a public key server. Once you know the key hash, the key can be retrieved using the command:

	gpg --keyserver [name of keyserver] --recv-keys [keyhash]
	sudo apt-get update

> Now you're ready to start installing software from the PPA!
>
 	sudo add-apt-repository ppa:admin/ppa-dmg
 	sudo apt update
	sudo apt install openssl libssl-dev libcurlpp-dev cpp_starter
	
 
