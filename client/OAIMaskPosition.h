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

/*
 * OAIMaskPosition.h
 *
 * This object describes the position on faces where a mask should be placed by default.
 */

#ifndef OAIMaskPosition_H
#define OAIMaskPosition_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIMaskPosition : public OAIObject {
public:
    OAIMaskPosition();
    OAIMaskPosition(QString json);
    ~OAIMaskPosition() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPoint() const;
    void setPoint(const QString &point);
    bool is_point_Set() const;
    bool is_point_Valid() const;

    double getXShift() const;
    void setXShift(const double &x_shift);
    bool is_x_shift_Set() const;
    bool is_x_shift_Valid() const;

    double getYShift() const;
    void setYShift(const double &y_shift);
    bool is_y_shift_Set() const;
    bool is_y_shift_Valid() const;

    double getScale() const;
    void setScale(const double &scale);
    bool is_scale_Set() const;
    bool is_scale_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_point;
    bool m_point_isSet;
    bool m_point_isValid;

    double m_x_shift;
    bool m_x_shift_isSet;
    bool m_x_shift_isValid;

    double m_y_shift;
    bool m_y_shift_isSet;
    bool m_y_shift_isValid;

    double m_scale;
    bool m_scale_isSet;
    bool m_scale_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIMaskPosition)

#endif // OAIMaskPosition_H
