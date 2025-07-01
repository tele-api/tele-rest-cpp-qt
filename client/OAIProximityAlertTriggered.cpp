/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIProximityAlertTriggered.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIProximityAlertTriggered::OAIProximityAlertTriggered(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProximityAlertTriggered::OAIProximityAlertTriggered() {
    this->initializeModel();
}

OAIProximityAlertTriggered::~OAIProximityAlertTriggered() {}

void OAIProximityAlertTriggered::initializeModel() {

    m_traveler_isSet = false;
    m_traveler_isValid = false;

    m_watcher_isSet = false;
    m_watcher_isValid = false;

    m_distance_isSet = false;
    m_distance_isValid = false;
}

void OAIProximityAlertTriggered::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProximityAlertTriggered::fromJsonObject(QJsonObject json) {

    m_traveler_isValid = ::tele_rest::fromJsonValue(m_traveler, json[QString("traveler")]);
    m_traveler_isSet = !json[QString("traveler")].isNull() && m_traveler_isValid;

    m_watcher_isValid = ::tele_rest::fromJsonValue(m_watcher, json[QString("watcher")]);
    m_watcher_isSet = !json[QString("watcher")].isNull() && m_watcher_isValid;

    m_distance_isValid = ::tele_rest::fromJsonValue(m_distance, json[QString("distance")]);
    m_distance_isSet = !json[QString("distance")].isNull() && m_distance_isValid;
}

QString OAIProximityAlertTriggered::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProximityAlertTriggered::asJsonObject() const {
    QJsonObject obj;
    if (m_traveler.isSet()) {
        obj.insert(QString("traveler"), ::tele_rest::toJsonValue(m_traveler));
    }
    if (m_watcher.isSet()) {
        obj.insert(QString("watcher"), ::tele_rest::toJsonValue(m_watcher));
    }
    if (m_distance_isSet) {
        obj.insert(QString("distance"), ::tele_rest::toJsonValue(m_distance));
    }
    return obj;
}

OAIUser OAIProximityAlertTriggered::getTraveler() const {
    return m_traveler;
}
void OAIProximityAlertTriggered::setTraveler(const OAIUser &traveler) {
    m_traveler = traveler;
    m_traveler_isSet = true;
}

bool OAIProximityAlertTriggered::is_traveler_Set() const{
    return m_traveler_isSet;
}

bool OAIProximityAlertTriggered::is_traveler_Valid() const{
    return m_traveler_isValid;
}

OAIUser OAIProximityAlertTriggered::getWatcher() const {
    return m_watcher;
}
void OAIProximityAlertTriggered::setWatcher(const OAIUser &watcher) {
    m_watcher = watcher;
    m_watcher_isSet = true;
}

bool OAIProximityAlertTriggered::is_watcher_Set() const{
    return m_watcher_isSet;
}

bool OAIProximityAlertTriggered::is_watcher_Valid() const{
    return m_watcher_isValid;
}

qint32 OAIProximityAlertTriggered::getDistance() const {
    return m_distance;
}
void OAIProximityAlertTriggered::setDistance(const qint32 &distance) {
    m_distance = distance;
    m_distance_isSet = true;
}

bool OAIProximityAlertTriggered::is_distance_Set() const{
    return m_distance_isSet;
}

bool OAIProximityAlertTriggered::is_distance_Valid() const{
    return m_distance_isValid;
}

bool OAIProximityAlertTriggered::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_traveler.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_watcher.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_distance_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProximityAlertTriggered::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_traveler_isValid && m_watcher_isValid && m_distance_isValid && true;
}

} // namespace tele_rest
