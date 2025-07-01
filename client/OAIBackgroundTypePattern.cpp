/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIBackgroundTypePattern.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBackgroundTypePattern::OAIBackgroundTypePattern(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBackgroundTypePattern::OAIBackgroundTypePattern() {
    this->initializeModel();
}

OAIBackgroundTypePattern::~OAIBackgroundTypePattern() {}

void OAIBackgroundTypePattern::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_document_isSet = false;
    m_document_isValid = false;

    m_fill_isSet = false;
    m_fill_isValid = false;

    m_intensity_isSet = false;
    m_intensity_isValid = false;

    m_is_inverted_isSet = false;
    m_is_inverted_isValid = false;

    m_is_moving_isSet = false;
    m_is_moving_isValid = false;
}

void OAIBackgroundTypePattern::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBackgroundTypePattern::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_document_isValid = ::tele_rest::fromJsonValue(m_document, json[QString("document")]);
    m_document_isSet = !json[QString("document")].isNull() && m_document_isValid;

    m_fill_isValid = ::tele_rest::fromJsonValue(m_fill, json[QString("fill")]);
    m_fill_isSet = !json[QString("fill")].isNull() && m_fill_isValid;

    m_intensity_isValid = ::tele_rest::fromJsonValue(m_intensity, json[QString("intensity")]);
    m_intensity_isSet = !json[QString("intensity")].isNull() && m_intensity_isValid;

    m_is_inverted_isValid = ::tele_rest::fromJsonValue(m_is_inverted, json[QString("is_inverted")]);
    m_is_inverted_isSet = !json[QString("is_inverted")].isNull() && m_is_inverted_isValid;

    m_is_moving_isValid = ::tele_rest::fromJsonValue(m_is_moving, json[QString("is_moving")]);
    m_is_moving_isSet = !json[QString("is_moving")].isNull() && m_is_moving_isValid;
}

QString OAIBackgroundTypePattern::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBackgroundTypePattern::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_document.isSet()) {
        obj.insert(QString("document"), ::tele_rest::toJsonValue(m_document));
    }
    if (m_fill.isSet()) {
        obj.insert(QString("fill"), ::tele_rest::toJsonValue(m_fill));
    }
    if (m_intensity_isSet) {
        obj.insert(QString("intensity"), ::tele_rest::toJsonValue(m_intensity));
    }
    if (m_is_inverted_isSet) {
        obj.insert(QString("is_inverted"), ::tele_rest::toJsonValue(m_is_inverted));
    }
    if (m_is_moving_isSet) {
        obj.insert(QString("is_moving"), ::tele_rest::toJsonValue(m_is_moving));
    }
    return obj;
}

QString OAIBackgroundTypePattern::getType() const {
    return m_type;
}
void OAIBackgroundTypePattern::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBackgroundTypePattern::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBackgroundTypePattern::is_type_Valid() const{
    return m_type_isValid;
}

OAIDocument OAIBackgroundTypePattern::getDocument() const {
    return m_document;
}
void OAIBackgroundTypePattern::setDocument(const OAIDocument &document) {
    m_document = document;
    m_document_isSet = true;
}

bool OAIBackgroundTypePattern::is_document_Set() const{
    return m_document_isSet;
}

bool OAIBackgroundTypePattern::is_document_Valid() const{
    return m_document_isValid;
}

OAIBackgroundFill OAIBackgroundTypePattern::getFill() const {
    return m_fill;
}
void OAIBackgroundTypePattern::setFill(const OAIBackgroundFill &fill) {
    m_fill = fill;
    m_fill_isSet = true;
}

bool OAIBackgroundTypePattern::is_fill_Set() const{
    return m_fill_isSet;
}

bool OAIBackgroundTypePattern::is_fill_Valid() const{
    return m_fill_isValid;
}

qint32 OAIBackgroundTypePattern::getIntensity() const {
    return m_intensity;
}
void OAIBackgroundTypePattern::setIntensity(const qint32 &intensity) {
    m_intensity = intensity;
    m_intensity_isSet = true;
}

bool OAIBackgroundTypePattern::is_intensity_Set() const{
    return m_intensity_isSet;
}

bool OAIBackgroundTypePattern::is_intensity_Valid() const{
    return m_intensity_isValid;
}

bool OAIBackgroundTypePattern::isIsInverted() const {
    return m_is_inverted;
}
void OAIBackgroundTypePattern::setIsInverted(const bool &is_inverted) {
    m_is_inverted = is_inverted;
    m_is_inverted_isSet = true;
}

bool OAIBackgroundTypePattern::is_is_inverted_Set() const{
    return m_is_inverted_isSet;
}

bool OAIBackgroundTypePattern::is_is_inverted_Valid() const{
    return m_is_inverted_isValid;
}

bool OAIBackgroundTypePattern::isIsMoving() const {
    return m_is_moving;
}
void OAIBackgroundTypePattern::setIsMoving(const bool &is_moving) {
    m_is_moving = is_moving;
    m_is_moving_isSet = true;
}

bool OAIBackgroundTypePattern::is_is_moving_Set() const{
    return m_is_moving_isSet;
}

bool OAIBackgroundTypePattern::is_is_moving_Valid() const{
    return m_is_moving_isValid;
}

bool OAIBackgroundTypePattern::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_document.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fill.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_intensity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_inverted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_moving_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBackgroundTypePattern::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_document_isValid && m_fill_isValid && m_intensity_isValid && true;
}

} // namespace tele_rest
