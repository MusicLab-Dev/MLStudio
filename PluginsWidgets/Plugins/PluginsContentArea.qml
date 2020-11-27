import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: pluginsContentArea
    color: "red"

    GridView {
        anchors.fill: parent

        model: [
            ["Equalizer", PluginsView.Effect | PluginsView.EQ],
            ["Classic piano", PluginsView.Instrument | PluginsView.Piano]
        ]

        delegate: Rectangle {
            width: 100
            height: 100
            border.color: "black"
            border.width: 1
            visible: !pluginsView.currentFilter || pluginsView.currentFilter & modelData[1]

            Text {
                anchors.centerIn: parent
                text: modelData[0]
            }
        }
    }
}
