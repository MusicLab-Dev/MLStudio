import QtQuick 2.15
import QtQuick.Controls 2.15

import "../"

Rectangle {
    width: Math.max(parent.width / 5, 500)
    height: parent.height
    x: parent.parent.x
    y: parent.parent.y
    color: "#0D2D47"
    radius: 30

    Item {
        id: pluginResearchTextInput
        width: pluginForeground.width * 0.8
        height : pluginForeground.height * 0.05
        x: (pluginForeground.width - width) / 2
        y: (pluginForeground.height - height) / 3

        DefaultTextInput {
            anchors.fill: parent
            color: "white"
            opacity: 0.42
        }
    }


    Item {
        id: pluginCheckBoxes
        width: pluginForeground.width * 0.8
        height: pluginForeground.height * 0.5
        x: (pluginForeground.width - width) / 2
        y: pluginResearchTextInput.y + pluginResearchTextInput.height * 2

        ListView {
            anchors.fill: parent
            model: 5
            spacing: parent.height * 0.04
            delegate: DefaultCheckBox {
                height: 25
            }
        }

    }
}
