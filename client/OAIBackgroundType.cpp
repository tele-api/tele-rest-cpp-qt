/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIBackgroundType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBackgroundType::OAIBackgroundType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBackgroundType::OAIBackgroundType() {
    this->initializeModel();
}

OAIBackgroundType::~OAIBackgroundType() {}

void OAIBackgroundType::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_fill_isSet = false;
    m_fill_isValid = false;

    m_dark_theme_dimming_isSet = false;
    m_dark_theme_dimming_isValid = false;

    m_document_isSet = false;
    m_document_isValid = false;

    m_intensity_isSet = false;
    m_intensity_isValid = false;

    m_theme_name_isSet = false;
    m_theme_name_isValid = false;

    m_is_blurred_isSet = false;
    m_is_blurred_isValid = false;

    m_is_moving_isSet = false;
    m_is_moving_isValid = false;

    m_is_inverted_isSet = false;
    m_is_inverted_isValid = false;
}

void OAIBackgroundType::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBackgroundType::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_fill_isValid = ::tele_rest::fromJsonValue(m_fill, json[QString("fill")]);
    m_fill_isSet = !json[QString("fill")].isNull() && m_fill_isValid;

    m_dark_theme_dimming_isValid = ::tele_rest::fromJsonValue(m_dark_theme_dimming, json[QString("dark_theme_dimming")]);
    m_dark_theme_dimming_isSet = !json[QString("dark_theme_dimming")].isNull() && m_dark_theme_dimming_isValid;

    m_document_isValid = ::tele_rest::fromJsonValue(m_document, json[QString("document")]);
    m_document_isSet = !json[QString("document")].isNull() && m_document_isValid;

    m_intensity_isValid = ::tele_rest::fromJsonValue(m_intensity, json[QString("intensity")]);
    m_intensity_isSet = !json[QString("intensity")].isNull() && m_intensity_isValid;

    m_theme_name_isValid = ::tele_rest::fromJsonValue(m_theme_name, json[QString("theme_name")]);
    m_theme_name_isSet = !json[QString("theme_name")].isNull() && m_theme_name_isValid;

    m_is_blurred_isValid = ::tele_rest::fromJsonValue(m_is_blurred, json[QString("is_blurred")]);
    m_is_blurred_isSet = !json[QString("is_blurred")].isNull() && m_is_blurred_isValid;

    m_is_moving_isValid = ::tele_rest::fromJsonValue(m_is_moving, json[QString("is_moving")]);
    m_is_moving_isSet = !json[QString("is_moving")].isNull() && m_is_moving_isValid;

    m_is_inverted_isValid = ::tele_rest::fromJsonValue(m_is_inverted, json[QString("is_inverted")]);
    m_is_inverted_isSet = !json[QString("is_inverted")].isNull() && m_is_inverted_isValid;
}

QString OAIBackgroundType::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBackgroundType::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_fill.isSet()) {
        obj.insert(QString("fill"), ::tele_rest::toJsonValue(m_fill));
    }
    if (m_dark_theme_dimming_isSet) {
        obj.insert(QString("dark_theme_dimming"), ::tele_rest::toJsonValue(m_dark_theme_dimming));
    }
    if (m_document.isSet()) {
        obj.insert(QString("document"), ::tele_rest::toJsonValue(m_document));
    }
    if (m_intensity_isSet) {
        obj.insert(QString("intensity"), ::tele_rest::toJsonValue(m_intensity));
    }
    if (m_theme_name_isSet) {
        obj.insert(QString("theme_name"), ::tele_rest::toJsonValue(m_theme_name));
    }
    if (m_is_blurred_isSet) {
        obj.insert(QString("is_blurred"), ::tele_rest::toJsonValue(m_is_blurred));
    }
    if (m_is_moving_isSet) {
        obj.insert(QString("is_moving"), ::tele_rest::toJsonValue(m_is_moving));
    }
    if (m_is_inverted_isSet) {
        obj.insert(QString("is_inverted"), ::tele_rest::toJsonValue(m_is_inverted));
    }
    return obj;
}

QString OAIBackgroundType::getType() const {
    return m_type;
}
void OAIBackgroundType::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBackgroundType::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBackgroundType::is_type_Valid() const{
    return m_type_isValid;
}

OAIBackgroundFill OAIBackgroundType::getFill() const {
    return m_fill;
}
void OAIBackgroundType::setFill(const OAIBackgroundFill &fill) {
    m_fill = fill;
    m_fill_isSet = true;
}

bool OAIBackgroundType::is_fill_Set() const{
    return m_fill_isSet;
}

bool OAIBackgroundType::is_fill_Valid() const{
    return m_fill_isValid;
}

qint32 OAIBackgroundType::getDarkThemeDimming() const {
    return m_dark_theme_dimming;
}
void OAIBackgroundType::setDarkThemeDimming(const qint32 &dark_theme_dimming) {
    m_dark_theme_dimming = dark_theme_dimming;
    m_dark_theme_dimming_isSet = true;
}

bool OAIBackgroundType::is_dark_theme_dimming_Set() const{
    return m_dark_theme_dimming_isSet;
}

bool OAIBackgroundType::is_dark_theme_dimming_Valid() const{
    return m_dark_theme_dimming_isValid;
}

OAIDocument OAIBackgroundType::getDocument() const {
    return m_document;
}
void OAIBackgroundType::setDocument(const OAIDocument &document) {
    m_document = document;
    m_document_isSet = true;
}

bool OAIBackgroundType::is_document_Set() const{
    return m_document_isSet;
}

bool OAIBackgroundType::is_document_Valid() const{
    return m_document_isValid;
}

qint32 OAIBackgroundType::getIntensity() const {
    return m_intensity;
}
void OAIBackgroundType::setIntensity(const qint32 &intensity) {
    m_intensity = intensity;
    m_intensity_isSet = true;
}

bool OAIBackgroundType::is_intensity_Set() const{
    return m_intensity_isSet;
}

bool OAIBackgroundType::is_intensity_Valid() const{
    return m_intensity_isValid;
}

QString OAIBackgroundType::getThemeName() const {
    return m_theme_name;
}
void OAIBackgroundType::setThemeName(const QString &theme_name) {
    m_theme_name = theme_name;
    m_theme_name_isSet = true;
}

bool OAIBackgroundType::is_theme_name_Set() const{
    return m_theme_name_isSet;
}

bool OAIBackgroundType::is_theme_name_Valid() const{
    return m_theme_name_isValid;
}

bool OAIBackgroundType::isIsBlurred() const {
    return m_is_blurred;
}
void OAIBackgroundType::setIsBlurred(const bool &is_blurred) {
    m_is_blurred = is_blurred;
    m_is_blurred_isSet = true;
}

bool OAIBackgroundType::is_is_blurred_Set() const{
    return m_is_blurred_isSet;
}

bool OAIBackgroundType::is_is_blurred_Valid() const{
    return m_is_blurred_isValid;
}

bool OAIBackgroundType::isIsMoving() const {
    return m_is_moving;
}
void OAIBackgroundType::setIsMoving(const bool &is_moving) {
    m_is_moving = is_moving;
    m_is_moving_isSet = true;
}

bool OAIBackgroundType::is_is_moving_Set() const{
    return m_is_moving_isSet;
}

bool OAIBackgroundType::is_is_moving_Valid() const{
    return m_is_moving_isValid;
}

bool OAIBackgroundType::isIsInverted() const {
    return m_is_inverted;
}
void OAIBackgroundType::setIsInverted(const bool &is_inverted) {
    m_is_inverted = is_inverted;
    m_is_inverted_isSet = true;
}

bool OAIBackgroundType::is_is_inverted_Set() const{
    return m_is_inverted_isSet;
}

bool OAIBackgroundType::is_is_inverted_Valid() const{
    return m_is_inverted_isValid;
}

bool OAIBackgroundType::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fill.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dark_theme_dimming_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_document.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_intensity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_theme_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_blurred_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_moving_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_inverted_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBackgroundType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_fill_isValid && m_dark_theme_dimming_isValid && m_document_isValid && m_intensity_isValid && m_theme_name_isValid && true;
}

} // namespace tele_rest
