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

#include "OAIPaidMediaPreview.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPaidMediaPreview::OAIPaidMediaPreview(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaidMediaPreview::OAIPaidMediaPreview() {
    this->initializeModel();
}

OAIPaidMediaPreview::~OAIPaidMediaPreview() {}

void OAIPaidMediaPreview::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;
}

void OAIPaidMediaPreview::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaidMediaPreview::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_width_isValid = ::tele_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::tele_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;
}

QString OAIPaidMediaPreview::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaidMediaPreview::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::tele_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::tele_rest::toJsonValue(m_height));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::tele_rest::toJsonValue(m_duration));
    }
    return obj;
}

QString OAIPaidMediaPreview::getType() const {
    return m_type;
}
void OAIPaidMediaPreview::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPaidMediaPreview::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPaidMediaPreview::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIPaidMediaPreview::getWidth() const {
    return m_width;
}
void OAIPaidMediaPreview::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIPaidMediaPreview::is_width_Set() const{
    return m_width_isSet;
}

bool OAIPaidMediaPreview::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIPaidMediaPreview::getHeight() const {
    return m_height;
}
void OAIPaidMediaPreview::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIPaidMediaPreview::is_height_Set() const{
    return m_height_isSet;
}

bool OAIPaidMediaPreview::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIPaidMediaPreview::getDuration() const {
    return m_duration;
}
void OAIPaidMediaPreview::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIPaidMediaPreview::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIPaidMediaPreview::is_duration_Valid() const{
    return m_duration_isValid;
}

bool OAIPaidMediaPreview::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPaidMediaPreview::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace tele_rest
