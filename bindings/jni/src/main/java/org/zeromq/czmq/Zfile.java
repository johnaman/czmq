/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
package org.zeromq.czmq;

public class Zfile implements AutoCloseable{
    static {
        try {
            System.loadLibrary ("czmqjni");
        }
        catch (Exception e) {
            System.exit (-1);
        }
    }
    long self;
    /*
    If file exists, populates properties. CZMQ supports portable symbolic
    links, which are files with the extension ".ln". A symbolic link is a
    text file containing one line, the filename of a target file. Reading
    data from the symbolic link actually reads from the target file. Path
    may be NULL, in which case it is not used.                           
    */
    native static long __new (String path, String name);
    public Zfile (String path, String name) {
        /*  TODO: if __new fails, self is null...  */
        self = __new (path, name);
    }
    public Zfile () {
        self = 0;
    }
    /*
    Destroy a file item
    */
    native static void __destroy (long self);
    @Override
    public void close () {
        __destroy (self);
        self = 0;
    }
    /*
    Duplicate a file item, returns a newly constructed item. If the file
    is null, or memory was exhausted, returns null.                     
    */
    native static long __dup (long self);
    public long dup (long self) {
        return __dup (self);
    }
    /*
    Return file name, remove path if provided
    */
    native static String __filename (long self, String path);
    public String filename (long self, String path) {
        return __filename (self, path);
    }
    /*
    Refresh file properties from disk; this is not done automatically   
    on access methods, otherwise it is not possible to compare directory
    snapshots.                                                          
    */
    native static void __restat (long self);
    public void restat (long self) {
        __restat (self);
    }
    /*
    Return when the file was last modified. If you want this to reflect the
    current situation, call zfile_restat before checking this property.    
    */
    native static long __modified (long self);
    public long modified (long self) {
        return __modified (self);
    }
    /*
    Return the last-known size of the file. If you want this to reflect the
    current situation, call zfile_restat before checking this property.    
    */
    native static long __cursize (long self);
    public long cursize (long self) {
        return __cursize (self);
    }
    /*
    Return true if the file is a directory. If you want this to reflect   
    any external changes, call zfile_restat before checking this property.
    */
    native static boolean __isDirectory (long self);
    public boolean isDirectory (long self) {
        return __isDirectory (self);
    }
    /*
    Return true if the file is a regular file. If you want this to reflect
    any external changes, call zfile_restat before checking this property.
    */
    native static boolean __isRegular (long self);
    public boolean isRegular (long self) {
        return __isRegular (self);
    }
    /*
    Return true if the file is readable by this process. If you want this to
    reflect any external changes, call zfile_restat before checking this    
    property.                                                               
    */
    native static boolean __isReadable (long self);
    public boolean isReadable (long self) {
        return __isReadable (self);
    }
    /*
    Return true if the file is writeable by this process. If you want this 
    to reflect any external changes, call zfile_restat before checking this
    property.                                                              
    */
    native static boolean __isWriteable (long self);
    public boolean isWriteable (long self) {
        return __isWriteable (self);
    }
    /*
    Check if file has stopped changing and can be safely processed.
    Updates the file statistics from disk at every call.           
    */
    native static boolean __isStable (long self);
    public boolean isStable (long self) {
        return __isStable (self);
    }
    /*
    Return true if the file was changed on disk since the zfile_t object
    was created, or the last zfile_restat() call made on it.            
    */
    native static boolean __hasChanged (long self);
    public boolean hasChanged (long self) {
        return __hasChanged (self);
    }
    /*
    Remove the file from disk
    */
    native static void __remove (long self);
    public void remove (long self) {
        __remove (self);
    }
    /*
    Open file for reading                             
    Returns 0 if OK, -1 if not found or not accessible
    */
    native static int __input (long self);
    public int input (long self) {
        return __input (self);
    }
    /*
    Open file for writing, creating directory if needed               
    File is created if necessary; chunks can be written to file at any
    location. Returns 0 if OK, -1 if error.                           
    */
    native static int __output (long self);
    public int output (long self) {
        return __output (self);
    }
    /*
    Read chunk from file at specified position. If this was the last chunk,
    sets the eof property. Returns a null chunk in case of error.          
    */
    native static long __read (long self, long bytes, long offset);
    public long read (long self, long bytes, long offset) {
        return __read (self, bytes, offset);
    }
    /*
    Returns true if zfile_read() just read the last chunk in the file.
    */
    native static boolean __eof (long self);
    public boolean eof (long self) {
        return __eof (self);
    }
    /*
    Write chunk to file at specified position
    Return 0 if OK, else -1                  
    */
    native static int __write (long self, long chunk, long offset);
    public int write (long self, long chunk, long offset) {
        return __write (self, chunk, offset);
    }
    /*
    Read next line of text from file. Returns a pointer to the text line,
    or NULL if there was nothing more to read from the file.             
    */
    native static String __readln (long self);
    public String readln (long self) {
        return __readln (self);
    }
    /*
    Close file, if open
    */
    native static void __close (long self);
    public void close (long self) {
        __close (self);
    }
    /*
    Calculate SHA1 digest for file, using zdigest class.
    */
    native static String __digest (long self);
    public String digest (long self) {
        return __digest (self);
    }
    /*
    Self test of this class.
    */
    native static void __test (boolean verbose);
    public void test (boolean verbose) {
        __test (verbose);
    }
}
