package org.monedadelmundocore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class MonedaDelMundoQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File monedadelmundoDir = new File(getFilesDir().getAbsolutePath() + "/.monedadelmundo");
        if (!monedadelmundoDir.exists()) {
            monedadelmundoDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
