/*******************************************************************************
 * The GUI Ents Explorer helps you visually alter and view an Ents Database Hierarchy.
 * Copyright (c) 2016. Jason Stockwell and OpenPatterns Inc.
 * www.openpatterns.net/#ents
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/

package net.openpatterns.ents.gui.ui_templates;

import javax.swing.*;
import java.awt.*;

/**
 * <p>Intervenes in the JLists default rendering of each element. Allows the elements to render themselves.</p>
 */
class CustomListRenderer implements ListCellRenderer<ListElement> {


    CustomListRenderer() {
    }


    @Override
    public Component getListCellRendererComponent(JList list, ListElement element, int index, boolean isSelected, boolean cellHasFocus) {

        JLabel label = element.generateLabel(index, isSelected, cellHasFocus);
        label.setHorizontalAlignment(SwingConstants.CENTER);

        return label;
    }

}
